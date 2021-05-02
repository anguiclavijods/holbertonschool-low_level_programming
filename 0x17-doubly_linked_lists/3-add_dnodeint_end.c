#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that agree node to end of list
 * @head: Represent the head of list
 * @n: Represent the data of list
 * Return: The values store in new_node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;
	dlistint_t *new_node;

/*.1 allocate node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

/*2. put in the data that is n*/
	new_node->n = n;

/*3. make next of new node as head and prev as null*/
	new_node->next = NULL;
	new_node->prev = NULL;

/*4. if the list linked is empty then make the new node as head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last = *head;

/*5. Else traverse till the last node*/
	while (last->next != NULL)
	{
		last = last->next;
	}
/*7. make last node as prev of new node*/
	new_node->prev = last;
/*6. change the next of last node*/
	last->next = new_node;

	return (new_node);
}
