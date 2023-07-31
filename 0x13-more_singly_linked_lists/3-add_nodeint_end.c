#include "lists.h"
/**
 * add_nodeint_end - add new nodes to the end of the list
 * @head: current place in the list
 * @n: int to add to the list
 * Return: pointer to current position in list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (!*head)
	{
		*head = end;
		return (*head);
	}
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = end;

	return (end);
}
