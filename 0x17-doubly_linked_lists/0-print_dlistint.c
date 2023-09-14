#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	return (i);
}
