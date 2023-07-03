/**
* _strstr - locates a substring
* @haystack: the longer string to search
* @needle: the first occurrence of the substrin
* Return: a pointer beg of substring or @Null if it not foound.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *h = haystack;
	char *n = needle;

	for (i = 0; h[i] != '\0'; i++)
	{
		for (j = 0; n[j] != '\0' && (h[i + j] == n[j]); j++)
		{
			if (h[i + j] != n[j])
				break;
		}
		if (n[j] == '\0')
			{
			return (h + i);
			}
	}
	return ('\0');
}
