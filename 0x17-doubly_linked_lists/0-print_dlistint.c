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
        /*store the old value of head pointer*/
        struct dlistint_t *tmp = head;

        /*change head pointer to point to next node*/
		h = h->next;

		printf("%d\n", h->n);

        /*delete memory allocated for the previous head node*/
        free(tmp);
	}

    return(int(h));
}

