#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int n;

	if (min > max)
		return (NULL);
	n = max - min + 1;

	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		arr[i] =  i;

	return (arr);
}
