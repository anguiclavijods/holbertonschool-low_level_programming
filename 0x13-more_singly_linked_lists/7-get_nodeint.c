#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - name of function that return nth of head
 * @head: pointer to linked list
 * @index: ponter to position linked list
 * Return:  values of head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
