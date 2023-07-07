#include <stdio.h>
#include <stdio.h>
/**
 * main - program prints its own name.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/*Unused parameter*/
	(void)argc;

	printf("%s", argv[0]);
	return (0);
}
