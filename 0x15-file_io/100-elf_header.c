#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is in ELF format.
 * @e_ident: An array containing the ELF magic numbers.
 *
 * Description:
 * If the file is not an ELF file, exits with code 98.
 */
void check_elf(unsigned char *e_ident)
{
    int index;

    for (index = 0; index < 4; index++)
    {
        if (e_ident[index] != 127 &&
            e_ident[index] != 'E' &&
            e_ident[index] != 'L' &&
            e_ident[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: An array containing the ELF magic numbers.
 *
 * Description:
 * The magic numbers are displayed as hexadecimal values separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
    int index;

    printf("  Magic:   ");

    for (index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x", e_ident[index]);

        if (index == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: An array containing the ELF class.
 *
 * Description:
 * Displays the ELF class as a string (e.g., "ELF32" or "ELF64").
 */
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");

    switch (e_ident[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_data - Prints the data encoding of an ELF header.
 * @e_ident: An array containing the ELF identification data.
 *
 * Description:
 * Displays the data encoding as a human-readable string.
 */
void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");

    switch (e_ident[EI_DATA])
    {
    case ELFDATANONE:
        printf("none\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: An array containing the ELF identification data.
 *
 * Description:
 * Displays the version of the ELF header.
 */
void print_version(unsigned char *e_ident)
{
    printf("  Version:                           %d",
           e_ident[EI_VERSION]);

    switch (e_ident[EI_VERSION])
    {
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
        break;
    }
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: An array containing the ELF identification data.
 *
 * Description:
 * Displays the operating system and ABI as a string.
 */
void print_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");

    switch (e_ident[EI_OSABI])
    {
    case ELFOSABI_NONE:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("UNIX - Solaris\n");
        break;
    case ELFOSABI_IRIX:
        printf("UNIX - IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("UNIX - FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("UNIX - Tru64\n");
        break;
    case ELFOSABI_ARM:
        printf("ARM\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone Application\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: An array containing the ELF identification data.
 *
 * Description:
 * Displays the ABI version as an integer.
 */
void print_abi(unsigned char *e_ident)
{
    printf("  ABI Version:                       %d\n",
           e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: An array containing the ELF identification data.
 *
 * Description:
 * Displays the ELF type as a human-readable string.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
    if (e_ident[EI_DATA] == ELFDATA2MSB)
        e_type >>= 8;

    printf("  Type:                              ");

    switch (e_type)
    {
    case ET_NONE:
        printf("NONE (None)\n");
        break;
    case ET_REL:
        printf("REL (Relocatable file)\n");
        break;
    case ET_EXEC:
        printf("EXEC (Executable file)\n");
        break;
    case ET_DYN:
        printf("DYN (Shared object file)\n");
        break;
    case ET_CORE:
        printf("CORE (Core file)\n");
        break;
    default:
        printf("<unknown: %x>\n", e_type);
    }
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: An array containing the ELF identification data.
 *
 * Description:
 * Displays the entry point address as a hexadecimal value.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    printf("  Entry point address:               ");

    if (e_ident[EI_DATA] == ELFDATA2MSB)
    {
        e_entry = ((e_entry << 8) & 0xFF00FF00) |
                  ((e_entry >> 8) & 0xFF00FF);
        e_entry = (e_entry << 16) | (e_entry >> 16);
    }

    if (e_ident[EI_CLASS] == ELFCLASS32)
        printf("%#x\n", (unsigned int)e_entry);
    else
        printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file descriptor.
 * @elf: The file descriptor of the ELF file.
 *
 * Description:
 * Closes the ELF file descriptor and exits with code 98 if unsuccessful.
 */
void close_elf(int elf)
{
    if (close(elf) == -1)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't close file descriptor %d\n", elf);
        exit(98);
    }
}

/**
 * main - Displays the information contained in the ELF header.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (success).
 *
 * Description:
 * Reads and analyzes the ELF header of a specified file.
 * Exits with code 98 if the file is not an ELF File or if the function fails.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    Elf64_Ehdr *header;
    int o, r;

    o = open(argv[1], O_RDONLY);
    if (o == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }
    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        close_elf(o);
        dprintf(STDERR_FILENO, "Error: Can't allocate memory for header\n");
        exit(98);
    }
    r = read(o, header, sizeof(Elf64_Ehdr));
    if (r == -1)
    {
        free(header);
        close_elf(o);
        dprintf(STDERR_FILENO, "Error: Couldn't read file %s\n", argv[1]);
        exit(98);
    }

    check_elf(header->e_ident);
    printf("ELF Header:\n");
    print_magic(header->e_ident);
    print_class(header->e_ident);
    print_data(header->e_ident);
    print_version(header->e_ident);
    print_osabi(header->e_ident);
    print_abi(header->e_ident);
    print_type(header->e_type, header->e_ident);
    print_entry(header->e_entry, header->e_ident);

    free(header);
    close_elf(o);
    return (0);
}

