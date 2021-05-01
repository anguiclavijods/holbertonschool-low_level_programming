#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)/*h=head, n=data*/
{
/*verify if h exist*/
	if (h == NULL)
	{
		return (NULL);
	}
	while (h != NULL)
	{
		h->n = h->n;
		h = h->next;
		printf("%d\n", h->n);
	}
/*pin node head*/
}

