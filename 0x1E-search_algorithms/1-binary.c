#include "search_algos.h"
/**
 * binary_search_recursive - Recursive binary search.
 * @array: Pointer to array.
 * @low: Lower bound of search.
 * @high: Upper bound of search.
 * @value: Value to find.
 *
 * Return: Index if found, else -1.
 */
int binary_search_recursive(int *array, int low, int high, int value)
{
	int mid, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
		else
			printf("\n");
	}
	mid = low + (high - low) / 2;

	if (array[mid] == value)
		return (mid);

	else if (array[mid] > value)
		return (binary_search_recursive(array, low, mid - 1, value));

	else
		return (binary_search_recursive(array, mid + 1, high, value));
}

/**
 * binary_search - Binary search algorithm.
 * @array: Pointer to array.
 * @size: Number of elements in array.
 * @value: Value to find.
 *
 * Return: Index if found, else -1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
