#include <stdlib.h>
#include "main.h"

/**
 * numb_words - Calculates the number of words in the string.
 * @s: Argument of the function.
 * Return: Result of the calculation.
 */
int numb_words(char *s)
{
	int catch, a, n;

	catch = 0;
	n = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			catch = 0;
		else if (catch == 0)
		{
			catch = 1;
			n++;
		}
	}

	return (n);
}
/**
 * **strtow - A function taht splits strings to words.
 * @str: Argument of the function.
 * Return: A pointer to the array of strings if successful
 * NULL otherwise.
 */
char **strtow(char *str)
{
	char **mtr, *tmp;
	int i, j = 0, length = 0, word, a = 0, start, end;

	while (*(str + length))
		length++;
	word = numb_words(str);
	if (word == 0)
		return (NULL);

	mtr = (char **) malloc(sizeof(char *) * (word + 1));
	if (mtr == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mtr[j] = tmp - a;
				j++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = i;
	}

	mtr[j] = NULL;

	return (mtr);
}
