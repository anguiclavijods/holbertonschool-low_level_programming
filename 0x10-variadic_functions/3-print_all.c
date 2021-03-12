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
	va_list ap;
	char *p_anything;
	int i = 0;

	va_start (ap, format);
	while (format == NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				p_anything = va_arg(ap, char *);
				if (p_anything == NULL)
				{
					printf("(nill)");
					break;
				}
				break;
		}
		if (format[i+1] && (format[i] == 'c' ||
		format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's'))
		printf(", ");
		i++;
		
	}
	va_end(ap);
	putchar('\n');
}
