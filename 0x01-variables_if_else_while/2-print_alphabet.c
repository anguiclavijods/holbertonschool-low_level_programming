#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print Alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a >= 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('/n');
	return (0);
}

