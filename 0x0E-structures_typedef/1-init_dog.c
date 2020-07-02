#include "dog.h"
#include <stdlib.h>

/**
* init_dog - full constructor for the dog object
* @d: pointer to dog object to initialize
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

