#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the date head node
 * @head: pointer to the linst linked
 *Return: data of the head
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head)
	{
		data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
		/*(*head)->n=NULL;*/
	}
	return (data);
}
