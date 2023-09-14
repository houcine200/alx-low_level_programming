#include "lists.h"
/**
  * *add_dnodeint_end - add a node to the end of the list
  * @head: head of the list
  * @n: value to add to the l
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *end = malloc(sizeof(dlistint_t));
    dlistint_t *temp;
    
    if(!end)
        return NULL;
    
    end->n = n;
    end->next = NULL;
    
    if(*head == NULL)
    {
        *head = end;
        return (end);
    }
    temp = *head;
    
    while(temp->next)
        temp = temp->next;
    
    temp->next = end;
    end->prev = temp;
    
    return (end);
}
