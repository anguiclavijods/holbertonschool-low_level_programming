#include <stdio.h>
/**
 * main - Print the numbers from 0 with commas and no repeat numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 0;
	int c = 49;

	for (; a <= 56; ++a)
	{
		for (; c <= 57; ++c)
		{
			putchar(a);
			putchar(c);
			if (a != 56 || c != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		b++;
		c = 49 + b;
	}
	putchar('\n');
	return (0);
}
