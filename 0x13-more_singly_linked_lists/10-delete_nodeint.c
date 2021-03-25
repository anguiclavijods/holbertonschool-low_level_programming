#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - function that delete of index of list
 * @head: pointer to head of list
 * @index: index of list
 *Return: Values delete of index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *act, *next;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	act = *head;
	for (i = 0; i < index - 1; i++)
	{
		while (!act->next)
		{
			return (-1);
		}
		act = act->next;
	}
	next = act->next;
	act->next = next->next;
	free(next);
	return (1);
}
