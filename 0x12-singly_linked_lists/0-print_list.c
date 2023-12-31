#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (i);
}
