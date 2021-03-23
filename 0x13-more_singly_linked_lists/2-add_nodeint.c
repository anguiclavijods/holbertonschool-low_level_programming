#include "lists.h"
/**
 * add_nodeint - function that add nodes at the begging list
 * @head: pointer to elements of list
 * @n: pointer to elements integers
 * Return: Value of new element of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
