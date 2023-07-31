#include "lists.h"
/**
 * print_listint_safe - Prints the elements of a listint_t linked list.
 *                      It handles loops in the linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *temp;
	size_t i = 0;

	if (head == NULL)
	{
		exit(98);
	}

	curr = head;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		i++;
		temp = curr;
		curr = curr->next;

		if (temp < curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}
	return (i);
}
