#include "lists.h"
#include <stdio.h>
/**
 *print_list - print the all elements of list
 *@h: parameter
 *Return: none
*/
size_t print_list(const list_t *h)
{
	if (!h)
	{
		return (0);
	}
	if (!h->str)
		printf("[%d] %s\n", 0, NIL);
	else
		printf("[%d] %s\n", h->len, h->str);
	if (!h->next)
		return (1);
	return (1 + print_list(h->next));
}
