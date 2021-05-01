#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
    /*verify if h exist*/
    while (h != NULL)
    {
        printf ("%d\n", h->n);
        h = h->next;
    }
}
