#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name.
 * @name: Argument to be printed.
 * @f: A function pointer.
 *
 * Return: Void.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
