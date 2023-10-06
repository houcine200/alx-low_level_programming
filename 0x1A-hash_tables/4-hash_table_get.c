#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *curr;
    
    if (!ht || !key)
        return NULL;
    
    index = key_index((const unsigned char *)key, ht->size);
    curr = ht->array[index];
    
    for (; curr; curr = curr->next)
    {
        if (strcmp(curr->key, key) == 0)
            return curr->value;
    }
    return (NULL); /* Key not found */
}