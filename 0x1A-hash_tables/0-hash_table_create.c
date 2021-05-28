#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - Function that created to new table
 * @size: Parameter that receive function with size of 1024
 * Return: New hash table or  copy of hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*create new table with struct hash_table_t, initialize in 0 for valgrind*/
	hash_table_t *new_hash_t = NULL;

	if (size <= 0)
	{
		return (NULL);
	}

	new_hash_t = malloc(sizeof(hash_table_t));/*reserve memory heap*/

	/*edge case if its is null or fail*/
	if (new_hash_t == NULL)
	{
		return (NULL);
	}

	/*start the new hash with nodes*/
	new_hash_t->size = size;
	new_hash_t->array = calloc(size, sizeof(hash_node_t **));

	/*if the new hash table, the array is NULL or 0*/
	if (new_hash_t->array == NULL)
	{
		return (NULL);
	}

	/*return new hash table*/
	return (new_hash_t);
}
