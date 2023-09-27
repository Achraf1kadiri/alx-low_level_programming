#include "main.h"

/**
  * _strstr - Find a substring in a string.
  * @haystack: The string that will be searched.
  * @needle: The substring to be found in the first string.
  *
  * Return: Returns a character.
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
