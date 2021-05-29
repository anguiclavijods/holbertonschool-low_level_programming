#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - Function that get index of parameter
 * @key: Parameter string
 * @size: Parameter for size
 * Return: The mod of size and new hash this is index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*declare the var to return*/
	unsigned long int new_hash;

	/*validate if parameter is null*/
	if (size == 0)
	{
		return ('\0');
	}

	/*called function hash_djbs2 for paremeter key*/
	new_hash = hash_djb2(key);

	/*var with mod size*/
	return (new_hash %= size);
}
