#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - name of function that insert value
 * @head: pointer a header of list
 * @idx: indice of list
 * @n: parameters of entry
 * Return: value of parameter insert
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	if (idx != 0)
	{
		aux = *head;
		for (i = 0; i < idx - 1 && aux; i++)
		{
			aux = aux->next;
		}
		if (!aux)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = aux->next;
	aux->next = aux;
	return (new);
}
