#include <stdio.h>
#include "dog.h"
/**
 *init_dog - name of struct dog
 *@d: pointer to struct
 *@name: pointer to name of struct
 *@age: date age float
 *@owner: pointer to date owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
