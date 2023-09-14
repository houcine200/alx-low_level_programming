#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes a node at an index
  * @head: double pointer to the head of the list
  * @index: index of the node to delete
  * Return: value of the node deleted
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *curr;

    if(*head == NULL)
        return (-1);

    curr = *head;

    if(index == 0)
    {
        if (curr->next != NULL)
        {
            curr->next->prev = NULL;
        }
        *head = curr->next;
        free(curr);
        return (1);
    }


    for (;curr && index > 0; index--)
    {
        curr = curr->next;
    }
    if (curr->next == NULL)
    {
            return -1;
    }

    curr->prev->next = curr->next;

    if (curr->next)
        curr->next->prev = curr->prev;

    free(curr);

    return (1);
}
