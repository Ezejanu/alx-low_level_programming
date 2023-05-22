#include <stdlib.h>
#include "dog.h"

/**
* free_dog -  a function that frees dogs
* @d: dog whose cpntent/details are to be freed
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
