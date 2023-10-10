#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees the allocated memo for a type struct dog.
 * @d: The freed structure.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
