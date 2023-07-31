#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at index
 * @head: head of the list
 * @index: location of the node to delete
 * Return: pointer to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;
	return (1);
}
