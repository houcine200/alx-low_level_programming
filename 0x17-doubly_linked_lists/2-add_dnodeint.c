#include "lists.h"
/**
 * add_dnodeint - Adds a node to the beginning of a doubly linked list
 * @head: head of the linked list
 * @n: value to add to the list
 * Return: pointer to the element added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *beg = malloc(sizeof(dlistint_t));

	if (beg == NULL)
		return (NULL);

	beg->n = n;

	if (*head == NULL)
	{
		*head = beg;
		return (beg);
	}
	beg->next = *head;
	(*head)->prev = beg;
	*head = beg;

	return (beg);
}
