nclude "main.h"
#include <stddef.h>

/**
 *  * _strchr - Locate a character in a string.
 *   * @s: A pointer to the string.
 *    * @c: The character to find in the string.
 *     * Return: A pointer to c, 0 otherwise.
 *      */
char *_strchr(char *s, char c)
{
		int i = 0;

			for (; s[i] >= '\0'; i++)
					{
								if (s[i] == c)
												return (&s[i]);
									}
				return (0);
}
