#include "lists.h"
/**
  * free_list - frees a linked list
  * @head: the beginning of the list
  */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
