#include <stdio.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;


	new = malloc(sizeof(list_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->str = str;

	for (i = 0; str[i]; i++);
	new->len = i;

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
