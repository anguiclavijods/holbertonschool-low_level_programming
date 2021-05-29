#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - Function that add element to the table and update
 * @ht: Pointer of hash table original
 * @key: Parameter array
 * @value: Parameter value for nodes
 * Return: If parameter is null 0 otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*Initialize var in 0 for valgrind*/
	unsigned long int  index_hash = 0;
	hash_node_t *node_hash = NULL, *tmp = NULL;

	if (ht == NULL || key == NULL || value == NULL)/*Edge case if is null*/
	{
		return ('\0');
	}
	index_hash = key_index((const unsigned char *)key, ht->size);/*Get index*/
	node_hash = malloc(sizeof(hash_node_t));/*Allocate memory for node created*/
	if (node_hash == NULL)/*Verify if node is null*/
	{
		return ('\0');
	}
	node_hash->key = (char *)key;/*Asign value key and value to node created */
	node_hash->value = (char *)value;
	if (ht->array[index_hash] != NULL)/*Verify if index have some node*/
	{
		tmp = ht->array[index_hash];/*update*/
		if (tmp->next)
		{
			if (!strcmp(key, tmp->key))
			{
				tmp->value = (char *)value;
				return (1);
			}
			tmp = tmp->next;
		}
		node_hash->next = ht->array[index_hash];/*case collition */
	}
	ht->array[index_hash] = node_hash;
	return (1);
}
