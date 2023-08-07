#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard out
 * @filename: name of the file to read
 * @letters: number of characters to print
 * Return: 0 on success
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t br, bw;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	br = read(fd, buf, letters);
	buf[br] = '\0';

	if (br == -1)
	{
		free(buf);
		return (0);
	}

	bw =	write(STDOUT_FILENO, buf, br);
	free(buf);
	close(fd);
	return (bw);
}
