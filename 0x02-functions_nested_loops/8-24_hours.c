#include "holberton.h"
/**
 * jack_bauer -  function that prints every minute of the day.
 *
 * Return: ()
 */
void jack_bauer(void)
{
int d;

for (d = 0; d <= 2; d++)
{
	int c;

	for (c = 00; c <= 9; c++)
	{
		int b;

		for (b = 0; b <= 5; b++)
		{
			int a;

			for (a = 0; a <= 9; a++)
			{
				_putchar(d + '0');
				_putchar(c + '0');
				_putchar(':');
				_putchar(b + '0');
				_putchar(a + '0');
				_putchar('\n');
				if (d == 2 && c == 3 && b == 5 && a == 9)
				{
					return;
				}
			}
		}
	}
}
}
