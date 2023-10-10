#include <stdlib.h>
#include "dog.h"

/**
 * string_length - Calculates the length of a given string.
 * @s: Argument of the function.
 * Return: The calculated length of the string.
 */
int string_length(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *string_copy - A helper function that copies the string of source
 * to destination.
 * @destination: pointer to the buffer in which we copy the string.
 * @source: string to be copied.
 * Return: A pointer to the destination.
 */
char *string_copy(char *destination, char *source)
{
	int length, i;

	length = 0;

	while (source[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';

	return (destination);
}

/**
 * new_dog - A function that creates a new dog.
 * @name: The dog’s name.
 * @age: The dog’s age.
 * @owner: The dog’s owner.
 * Return: A pointer to new dog on success, NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int length1, length2;

	length1 = string_length(name);
	length2 = string_length(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (length1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (length2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	string_copy(ndog->name, name);
	string_copy(ndog->owner, owner);
	ndog->age = age;

	return (ndog);
}
