#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * count_words - counts words in a given string
 * @str: the string to count words from
 *
 * Return: the number of words
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
			count++;

	if (count == 0 && strlen(str) == 1 && str[0] == ' ')
		count = 0;
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split
 *
 * Return: the pointer to an array containing words.
 */
char **strtow(char *str)
{
	int num_words, i = 0, j = 0, start, end, word_length;
	char *word;
	char **words;

	if (str == NULL || strlen(str) == 0 || count_words(str) == 0)
		return (NULL);

	num_words = count_words(str);
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0' && j < num_words)
	{
		start = i;
		while (!isspace(str[i]) && str[i] != '\0')
			i++;
		end = i;
		word_length = end - start;
		if (word_length > 0)
		{
			word = malloc(sizeof(char) * (word_length + 1));
			if (word == NULL)
			{
				return (NULL);
			}
			strncpy(word, str + start, word_length);
			word[word_length] = '\0';
			words[j] = word;
			j++;
		}
		else
			i++;
	}

	words[j] = NULL;
	return (words);
}
