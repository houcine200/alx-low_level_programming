#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	int i = 0;
	listint_t *curr;

	while (*h)
	{
		curr = *h;
		*h = (*h)->next;
		free(curr);
		i++;
	}

	return (i);
}
