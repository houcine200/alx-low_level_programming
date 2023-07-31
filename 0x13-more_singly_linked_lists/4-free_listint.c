#include "lists.h"
/**
 * free_listint - Frees a linked list and sets the head's pointer to NULL.
 *
 * @head: Pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while(head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
