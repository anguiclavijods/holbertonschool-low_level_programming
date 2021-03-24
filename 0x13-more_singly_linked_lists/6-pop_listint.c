#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes 
 * 
 * 
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (data =(*head)->next)
	{
		data = (*head)->n;
		temp = (*head)->next;
		free (*head);
		*head = temp;
		/*(*head)->n=NULL;*/
	}
	return (data);

}
