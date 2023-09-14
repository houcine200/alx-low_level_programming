#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: double pointer to a linked list
 * @idx: where to add the node
 * @n: value of the node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mid = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *h;


	if (!mid)
		return (NULL);

	mid->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; curr && idx != 1; idx--)
		curr = curr->next;

	if (curr == NULL)
	{
		free(mid);
		return (NULL);
	}
	mid->next = curr->next;
	mid->prev = curr;

	if (curr->next)
		curr->next->prev = mid;

	curr->next = mid;

	return (mid);
}
