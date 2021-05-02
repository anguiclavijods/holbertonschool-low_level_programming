#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Function that print all nodes of list
 * @h: represent the head
 * Return: Number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)/*h=head, n=data*/
{
/*verify if h exist*/
	if (h == NULL)
	{
		return ('\0');
	}

/*return size of linked list*/
	int res = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);/*travels and print list*/
		h = h->next;
        res++;
	}
	return (res);
}
