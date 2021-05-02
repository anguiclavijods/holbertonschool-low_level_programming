#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - function that add  node to list
 * @head: Represent the head
 * @n: Represent the dates of list
 * Return: Values of node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

/*0. verify if exist head exist*/
	if (head == NULL)
	{
		return (NULL);
	}

/*.1 allocate node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

/*2. put in the data that is n*/
	new_node->prev = NULL;
	new_node->n = n;

/*3. make next of new node as head and prev as nul*/
	new_node->next = *head;

/*4. change prev of head node to new node*/
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

/*5. Move the head to point to the new node*/
	*head = new_node;

	return (new_node);
}
