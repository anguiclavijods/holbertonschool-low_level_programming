#include "lists.h"
/**
 * add_nodeint_end - function that add nodes to the end list
 *@head:  pointer to elements of head
 *@n: entry parameters integers
 *Return: The nodes the final list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	new = (listint_t *)malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	return (*head);
}
