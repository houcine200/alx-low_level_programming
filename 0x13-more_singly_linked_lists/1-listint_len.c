#include "lists.h"
/**
 * listint_len - gets the number of nodes in a list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
