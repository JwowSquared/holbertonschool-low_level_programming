#include "dog.h"
#include <stdlib.h>

/**
* new_dog - takes constructor parameters and mallocs a new dog_t object
* @name: string to be copied into name
* @age: value to be stored in age
* @owner: string to be copied into owner
*
* Return: pointer to new dog_t object
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, length_name = 0, length_owner = 0;
	dog_t *output;

	output = malloc(sizeof(dog_t));
	if (output == NULL)
		return (NULL);

	while (name[length_name])
		length_name++;

	output->name = malloc(sizeof(char) * (length_name + 1));
	if (output->name == NULL)
		return (NULL);

	while (owner[length_owner])
		length_owner++;

	output->owner = malloc(sizeof(char) * (length_owner + 1));
	if (output->owner == NULL)
	{
		free(output->name);
		return (NULL);
	}

	for (i = 0; i <= length_name; i++)
		output->name[i] = name[i];

	for (i = 0; i <= length_owner; i++)
		output->owner[i] = owner[i];

	output->age = age;

	return (output);
}

