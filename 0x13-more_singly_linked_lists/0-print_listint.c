#include <stdio.h>
#include "lists.h"
/**
 * print_listint - name function for pint list
 * @h: pointer to arguments
 * Return: number nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + (print_listint(h->next)));
}
