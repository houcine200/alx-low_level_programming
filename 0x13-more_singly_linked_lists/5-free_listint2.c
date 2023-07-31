#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 *
 * @head: Pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	/*
	 * Check if head is already NULL (list is empty),
	 * in which case there's nothing to free.
	 */
	if (*head == NULL)
		return;

	temp = *head;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	/* Set the head pointer to NULL to indicate that the list is now empty.*/
	*head = NULL;
}

