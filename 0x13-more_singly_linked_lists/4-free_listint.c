#include "lists.h"
/**
 * free_listint - Frees a linked list and sets the head's pointer to NULL.
 *
 * @head: Pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
