#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_dlistint - Function that concat the values of list
 * @head: Represent list
 * Return: The value of var sum
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

