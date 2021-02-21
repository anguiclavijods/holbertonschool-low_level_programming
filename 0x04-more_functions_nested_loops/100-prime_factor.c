#include <stdio.h>
/**
 *
 *
 *
 */
int main (void)
{
	int prime[] = "612852475143";
	int j = prime;
	int i;

	do{
		i = 2;
		while (i % j != 0)
			i++;
		j /= i;
	}
	while (j != 1);
	printf ("%p\n", n);

	return(0);
}
