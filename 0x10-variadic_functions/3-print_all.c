#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything.
 * @format: A list of types arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(l, double));
					break;
				case 's':
					s = va_arg(l, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(l);
}
