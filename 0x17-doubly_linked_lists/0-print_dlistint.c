#include "lists.h"
/**
  * print_dlistint - prints a doubly linked list
  * @h: Head of the list
  * Return: Number of items in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	return (i);
}
