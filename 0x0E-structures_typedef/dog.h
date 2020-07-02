#ifndef _DOG_
#define _DOG_


/**
* struct dog - example struct
* @name: thing you call the dog
* @age: how long the dog has been
* @owner: thing you call the person that owns the dog
*
* Description: first example struct to practice typdef and member access
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_ */
