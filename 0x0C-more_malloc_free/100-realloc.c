#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Uses malloc and free to reallocate memory.
 * @ptr: A pointer to the previously allocated memory.
 * @old_size: The size of the previously allocated memory.
 * @new_size: The new size of memory.
 * Return: A pointer to the new allocation.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer = malloc(new_size);
	if (!pointer)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer[i] = old_ptr[i];
	}

	free(ptr);
	return (pointer);
}
