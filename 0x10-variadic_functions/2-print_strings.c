#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - name function
 *@separator: Pointer a char
 *@n: Parameters
 *Return: None.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *cha;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		cha = va_arg(ap, char *);
		if (cha == NULL)
			printf("nill");
		printf("%s", cha);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
