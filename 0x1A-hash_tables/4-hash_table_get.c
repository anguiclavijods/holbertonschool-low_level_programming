#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Is a parameter the hash table you want to look into
 * @key: Is a parameter key
 * Return: Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_hash = 0;
	hash_node_t *tmp = NULL;

	/*validate if date is null*/
	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index_hash = key_index((const unsigned char *)key, ht->size);/*Get index*/

	if (ht->array[index_hash] == NULL)
	{
		return (NULL);
	}
	tmp = ht->array[index_hash];/*update*/
	if (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
