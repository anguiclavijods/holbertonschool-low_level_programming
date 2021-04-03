#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - name of struct
 *@d: pointer a dog_t
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
