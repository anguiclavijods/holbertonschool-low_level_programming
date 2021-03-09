#include <stdio.h>
#include "dog.h"
/**
 *
 *
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);

	if(d == NULL)
	{
		
	}
	if(d->name == NULL)
	{
		printf("nil");
	}
}
