#include "main.h"

/**
 * main - Function that copies the content of one file to another
 * @argc: Amount of arguments
 * @argv: List of arguments
 * Return: 98, 99, or 100 if it fails, 0 if it works
 */
int main(int argc, char **argv)
{
	int file, file2, w, c, r;
	char s[1024] = {0};

	/* Check if the correct number of arguments is provided */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open the source file for reading */
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open or create the destination file for writing */
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file);
		exit(99);
	}

	/* Read and write data in chunks of 1024 bytes */
	r = 1;
	while (r)
	{
		r = read(file, s, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(file);
			close(file2);
			exit(98);
		}
		if (r)
		{
			w = write(file2, s, r);
			if (w == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(file);
				close(file2);
				exit(99);
			}
		}
	}

	/* Close both files */
	c = close(file);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
	c = close(file2);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}

	return (0);
}

