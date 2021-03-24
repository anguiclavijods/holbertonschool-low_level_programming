#include "lists.h"
/**
 * free_listint2 - function that free memory of list
 * @head: pointer to dates of struct
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *aux = NULL;

	if (head == NULL || *head == NULL)
		return;
	aux = *head;
	while (aux)
	{
		new = aux->next;
		free(aux);
		aux = new;
	}
	*head = NULL;
}
