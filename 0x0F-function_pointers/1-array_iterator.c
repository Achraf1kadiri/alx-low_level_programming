#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function.
 * @array: An array.
 * @size: The amount of elements.
 * @action: A pointer to the function.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
