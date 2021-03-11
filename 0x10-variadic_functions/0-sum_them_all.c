#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - name of functions
 *@n: parameters
 *Return: value of sum all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum_n;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum_n += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum_n);
}
