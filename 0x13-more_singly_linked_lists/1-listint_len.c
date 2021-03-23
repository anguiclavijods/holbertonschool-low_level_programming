#include "lists.h"
/**
 *listint_len - iterator of number nodes
 *@h: pointer to arguments of list
 *Return: Number of all nodes
 */
size_t listint_len(const listint_t *h)
{
int i = 0;

while (h != NULL)
{
	h = h->next;
	i++;
}
return (i);
}
