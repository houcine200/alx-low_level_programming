#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - 2 dim array
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
        	return NULL;

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return NULL;

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return NULL;
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return arr;
}


