#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @str: string to encode
 *
 * Return: address of str
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != 0; i++)
		for (j = 0; a[j] != 0; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
	return (str);
}
