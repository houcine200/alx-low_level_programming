/**
 * _strspn - gets the length of a prefix substring
 * @s: segment to compare bytes from
 * @accept: string of bytes to compare with
 * Return: number of bytes in segment s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
