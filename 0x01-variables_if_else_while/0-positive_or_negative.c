#include <stdlib.h>
#include <time.h>
#include <studio.h>
/*
 * main - clasify an integer 
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int n;
	srand(time(0));
	n=rand() - RAND_MAX/2;
	if(n>0)
		print ("%d is positive\n",n);
	else if(n<0)
		print("%d is negative\n",n);
	else if(n==0)
		printf("%d is zero\n",n);
	return (0);
}
