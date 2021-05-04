#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - Function that get to index and the print
 * @head: Represent the list
 * @index: Represent the number index to search in the index list
 * Return: The index to get
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int index_node = 0;
	/*verify if exist head*/
	if (head == NULL)
	{
		return (NULL);
	}
	/*verify iterator for index*/
	while (head != NULL)/*while head have node*/
	{
		if (index == index_node)
		{
			return (head);
		}
		head = head->next;/*iterate to next*/
		index_node++;
	}
	return (NULL);/*if the index no exist in index node*/
}
