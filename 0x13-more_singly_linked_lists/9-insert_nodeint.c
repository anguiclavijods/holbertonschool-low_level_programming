#include <stdio.h>
#include "lists.h"
/**
 * 
 * 
 * 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux;
	int i = 0;

	if (!head)
	{
		return (NULL);
	}

	new=malloc(sizeof(listint_t));
	if(!idx)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next= *head;
		*head = new;
		return(new);
	}
	aux= *head;
	while (aux->next)
	{
		if(i == idx)
		{
			new->next = aux->next;
			aux->next = aux;
			return (new);
		}
		aux = aux->next;
		i++;
	}

}