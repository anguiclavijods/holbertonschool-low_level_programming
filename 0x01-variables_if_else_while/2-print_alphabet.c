#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i ", n, (n % 10));

	printf("and is less than 6 and not 0\n");
	return (0);
}
