#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: An array.
 * @size: The amount of elements in array.
 * @cmp: A pointer to the function.
 *
 * Return: 0 on success, -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
