#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that count of size of list
 * @h: parameters linked list
 * Return: return size oflinked list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (!h->next)
		return (1);
	return (1 + list_len(h->next));
}
