#include "hash_tables.h"
/**
 * hash_table_delete - frees memory from a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			temp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = temp;
		}
	}
	free(ht->array);
	free(ht);
}
