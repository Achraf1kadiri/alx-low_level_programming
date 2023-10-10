#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type struct dog.
 * @d: A pointer to the initialized dog structer.
 * @name: The initialized name.
 * @age: The initialized age.
 * @owner: The initialized owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
