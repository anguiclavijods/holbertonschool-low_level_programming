#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - function that count the len of list
 * @h: Represent the head
 * Return: len of list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int res = 0;

/*verify is exist head*/
	if (h == NULL)
	{
		return ('\0');
	}

/*return size of linked list*/
	while (h != NULL)
	{
		h = h->next;
		res++;
	}
	return (res);
}
