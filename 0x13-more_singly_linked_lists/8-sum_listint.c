#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - name of function that add all values
 * @head: pointer to arguments of list
 * Return: value of sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
