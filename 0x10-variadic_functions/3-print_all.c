#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	const i;
	va_list ap;

	va_start (ap, format);
	printf = va_arg(ap, format);
	va_end(ap);
}
