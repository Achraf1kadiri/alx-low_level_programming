nclude "main.h"
/**
 *  * _strstr - Locates a substring in a string.
 *   * @haystack: A pointer to the searched string.
 *    * @needle: A pointer to substring to be located.
 *     * Return: The first occurrence, 0 if nothing matched.
 *      */
char *_strstr(char *haystack, char *needle)
{
		for (; *haystack != '\0'; haystack++)
				{
							char *l = haystack;
									char *p = needle;

											while (*l == *p && *p != '\0')
														{
																		l++;
																					p++;
																							}

													if (*p == '\0')
																	return (haystack);
														}

			return (0);
}
