#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: The number of elements to be summed.
 * @...: The parameters to sum.
 * Return: the result, 0 otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, result = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
		result += va_arg(x, int);

	va_end(x);

	return (result);
}
