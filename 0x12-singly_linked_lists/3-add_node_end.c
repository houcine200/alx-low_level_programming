#include "lists.h"
/**
  * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	if (head == NULL)
		return (NULL);
	last = *head;/*last will have the value of head*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;/*because next will be always null*/
	if (*head == NULL)/*for the fisrt case*/
	{
		*head = new;
		return (*head);
	}
	while (last->next)/*Until it gets to the NULL*/
		last = last->next;/*last will be the next of the last*/
	last->next = new;/*in case next is null already*/
	return (*head);
}
