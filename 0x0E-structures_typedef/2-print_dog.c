#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints the info inside a dog object
* @d: pointer to dog object
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name != NULL)
		printf("%s\n", d->name);
	else
		printf("(nil)\n");

	printf("Age: %f\nOwner: ", d->age);
	if (d->owner != NULL)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");
}
