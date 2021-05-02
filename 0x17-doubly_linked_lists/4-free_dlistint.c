#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free memory of list linked
 * @head: represent head of list
 * Return: none
 **/
void free_dlistint(dlistint_t *head)
{
    /*0. verify if head exist*/
	if (head == NULL)
	{
		return (NULL);
	}
    /*1. if head have exist prev*/
	while (head->prev)
	{
		head = head->prev;
	}
    /*if head have exist next*/
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
