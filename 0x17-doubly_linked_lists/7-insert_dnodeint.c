#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 * 
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    /*created new node*/
    dlistint_t *new_node = NULL, *past_node = NULL;

    /*1. check if the given prev_node is NULL */
    if (h == NULL) {
        return (NULL);
    }

    while (h)
    {
        /* 2. allocate new node */
        new_node = malloc(sizeof(new_node));

        if (new_node == NULL)
        {
            return (NULL);
        }
        /* 3. put in the data  */
        new_node->n = n;

        /* 4. Make next of new node as next of prev_node */
        new_node->next = NULL;
        new_node->prev = NULL;
        past_node = *h;

        if (idx > 0)
        {
            for (; idx > 1 && past_node; idx--)
            {
                past_node = past_node->next;
            }
            if (past_node == NULL)
            {
                return (NULL);
            }
            new_node->next = past_node->next;
            new_node->prev = past_node;
            if(past_node->next)
            {
                past_node->prev = new_node;
            }
            past_node->next = new_node;
        }
        else
        {
            new_node->next = *h;
            if(past_node != NULL)
            {
                past_node->prev = new_node;
            }
            *h = new_node;
        }
    }
    return (new_node);
}