#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - name function
 *@separator: Pointer a char
 *@n: Parameters
 *Return: None.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i == (n - 1))
			printf("%d\n", va_arg(ap, unsigned int));
		else
			printf("%d%s", va_arg(ap, unsigned int), separator);
	}
	va_end(ap);
}
