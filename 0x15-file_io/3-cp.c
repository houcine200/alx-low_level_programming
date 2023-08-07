#include "holberton.h"

/**
 * main - Function that copies the content of one file to another
 * @argc: Amount of arguments
 * @argv: List of arguments
 * Return: 98, 99, or 100 if it fails, 0 if it works
 */
int main(int argc, char **argv)
{
	int file, file2, w, c, r = -1;
	char s[1024] = {0};

	/* Check if the correct number of arguments is provided */
	error97(argc);

	/* Open the source file for reading */
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		error98(argv[1]);

	/* Open or create the destination file for writing */
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 == -1)
		error99(argv[2]);

	/* Read and write data in chunks of 1024 bytes */
	while (r)
	{
		r = read(file, s, 1024);
		if (r == -1)
			error98(argv[1]);
		if (r)
		{
			w = write(file2, s, r);
			if (w == -1)
				error99(argv[2]);
		}
	}

	/* Close both files */
	c = close(file);
	if (c == -1)
		error100(file);
	c = close(file2);
	if (c == -1)
		error100(file2);

	return (0);
}

