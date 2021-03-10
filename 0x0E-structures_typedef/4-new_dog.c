#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - pointer to dog_t
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: pointer of dog new
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (!d)
		return (NULL);
	d->name = malloc(length(name) + 1);
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(length(owner) + 1);
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);
	return (d);
}
