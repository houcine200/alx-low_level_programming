#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *argstostr(int ac, char **av)
{
	int i, dest_len = 0;
	char *dest;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		dest_len = dest_len + strlen(av[i]);

	dest = malloc(sizeof(char) * (dest_len + 1));

	if (dest == NULL)
		return (NULL);

	dest[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(dest, av[i]);
		strcat(dest, "\n");
	}

	return (dest);
}
