#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at index
 * @head: head of the list
 * @idx: location to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *mid;
	listint_t *curr;
	unsigned int i;

	if (!head)
		return (NULL);

	mid = malloc(sizeof(listint_t));
	if (!mid)
		return (NULL);

	mid->n = n;
	if (idx == 0)
	{
		mid->next = *head;
		*head = mid;
		return (mid);
	}
	curr = *head;



	for (i = 0; i < idx - 1 && curr; i++)
	{
		curr = curr->next;
	}
	if (!curr)
	{
		free(mid);
		return (NULL);
	}
	mid->next = curr->next;
	curr->next = mid;

	return (mid);
}
