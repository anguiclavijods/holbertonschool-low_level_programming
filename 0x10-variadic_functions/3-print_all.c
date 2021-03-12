#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - print everyone name function
 *@format: parameters
 *Return: none
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *p_all;
	int i = 0;

	while (format == NULL)
	{
		putchar('\n');
		return;
	}
	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			p_all = va_arg(ap, char *);
			if (p_all == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", p_all);
			break;
		}
		if (format[i + 1] && (format[i] == 'c' ||
			format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(ap);
	putchar('\n');
}
