#include <stdio.h>
/**
 *
 *
 *
 */
int main (void)
{
	const long prime[] = "612852475143";
	long j = prime;
	long i;

	do{
		i = 2;
		while (i % j != 0)
			i++;
		j /= i;
	}
	while (j != 1);
	printf ("%ld\n", n);

	return(0);
}
