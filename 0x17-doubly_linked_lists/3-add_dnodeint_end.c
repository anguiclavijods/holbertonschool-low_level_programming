#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * 
 * 
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *last;
        dlistint_t *new_node;

/*0. verify if exist head exist*/


/*.1 allocate node*/
	new_node = malloc(sizeof(dlistint_t));

    new_node->n= n;

/*2. put in the data that is n*/


/*3. make next of new node as head and prev as nul*/
	new_node->next = NULL;

/*4. if the list linked is empty then make
the new node as head*/
	if (head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
		return (NULL);
	}

/*5. Else traverse till the last node*/
	while (last->next != NULL)
    {
        last = last->next;
    }

/*6. change the next of last node*/
    last->next = new_node;

/*7. make last node as prev of new node*/
    new_node->prev = last;

	return(new_node);
}