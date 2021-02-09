#include <stdio.h>
/**
 * main - Print the numbers from 0 with commas and no repeat numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
					putchar('\n');
				else
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	return (0);
}
