#include "lists.h"
/**
 *free_listint - function free a memory
 *@head: Pointer to struct
 *Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *new, *aux = NULL;

	aux = head;
	while (aux)
	{
		new = aux->next;
		free(aux);
		aux = new;
	}
}
