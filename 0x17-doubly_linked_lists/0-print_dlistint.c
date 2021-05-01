#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
    /*verify if h exist*/
    if (h == NULL)
    {
        return (NULL);
    }
    while (h != NULL)
    {
        printf ("%d\n", h->n);
        h = h->next;
    }

    return(h);

    /*pin node head*/

}
