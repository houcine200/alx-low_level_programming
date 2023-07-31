#include "lists.h"
/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;
/*Check if the linked list is empty (head is NULL)*/
	if (!*head)
		return (0);
/*Store the head node's data (n)*/
	temp = *head;
	num = temp->n;
/*Move head to the next node*/
	*head = (*head)->next;
/*Free the previous head node*/
	free(temp);
	return (num);
}
