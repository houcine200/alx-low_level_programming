/**
 * leet - encodes a string into leetspeek.
 * @s: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aeotl";
	char n[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if ((s[i] == l[j]) || (s[i] + 32 == l[j]))
				s[i] = n[j];
		}
	}
	return (s);
}
