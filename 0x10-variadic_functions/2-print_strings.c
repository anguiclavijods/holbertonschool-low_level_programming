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
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *cha;
	
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		cha = va_arg(ap, char *);
		if (cha == NULL)
			printf("nill");
		printf("%s", cha);
		if (separator != NULL && i !=(n-1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
