#include "lists.h"
/**
 * print_listint - Name function for pint list
 * @h: pointer to arguments
 * Return: value of all elements
 */
size_t print_listint(const listint_t *h)
{
int i = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	i++;
}
return (i);
}
