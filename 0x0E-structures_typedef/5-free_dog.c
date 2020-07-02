#include "dog.h"
#include <stdlib.h>

/**
* free_dog - properly frees all memory associated with a dog_t object
* @d: pointer to dog_t object to free
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
