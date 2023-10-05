#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node to the beginning of a linked list.
 * @head: Pointer to the head of the linked list.
 * @key: Key to be added to the new node.
 * @value: Value to be added to the new node.
 * Return: Pointer to the new node or NULL on failure.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value in.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key
 * (duplicated, can be an empty string).
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (!new_value)
				return (0);

			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

	/* If no matching key is found, add a new node to the linked list. */
	if (add_node(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}
