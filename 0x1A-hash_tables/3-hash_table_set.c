#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table to add or update the key/value to
 * @key: key to add to the hash table
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *curr, *new_node;
	char *new_value;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			new_value = strdup(value);

			if (!new_value)
				return (0);

			free(curr->value);
			curr->value = new_value;
			return (1);
		}
		curr = curr->next;
	}
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
