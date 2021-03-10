#include <stdio.h>
#include "dog.h"
/**
 *print_dog - name function
 *@d: pointer a struct dog
 *
 */
void print_dog(struct dog *d)
{

		d->name == NULL ? printf("(nil)\n") : printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("(nil)\n") : printf("Owner: %s\n", d->owner);
		if (d == NULL)
			return;
}
