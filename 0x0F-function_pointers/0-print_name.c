#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - name function
 *@name: Pointer a char
 *@f: Pointer a name function
 *Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
