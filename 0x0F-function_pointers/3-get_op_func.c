#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - name of functions
 * @s: parameter a char, pointer a name function
 * Return: Null
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL && s[1] == '\0')
	{
		if (s[0] == (ops[i].op)[0])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
