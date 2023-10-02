#include "main.h"
/**
 * _puts - Uses putchar to print a string and a newline.
 * @str: A pointer to the string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
