#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * 
 * 
 * 
 **/
size_t dlistint_len(const dlistint_t *h)
{
    /*verify is exist head*/
    if (h == NULL)
    {
        return('\0');
    }

    /*return size of linked list*/
    int res = 0;

    while(h != NULL)
    {
        res++;
        h = h->next;
    }
    return (res);
}