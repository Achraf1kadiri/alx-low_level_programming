#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * check_string - Checks if a string contains only digits.
 * @s: Argument of the function.
 * Return: 0 for non digitts, 1 otherwise.
 */
int check_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * string_length - Calculates the length of a string.
 * @s: Argument of the function.
 * Return: The length of s.
 */
int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - Error messages for main.
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Multiplying 2 positive numbers.
 * @argc: The number of cmd arguments.
 * @argv: An array of string arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, i, c, digit1, digit2, *result, x = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !check_string(s1) || !check_string(s2))
		error();
	length1 = string_length(s1);
	length2 = string_length(s2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = s1[length1] - '0';
		c = 0;
		for (length2 = string_length(s2) - 1; length2 >= 0; length2--)
		{
			digit2 = s2[length2] - '0';
			c += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[length1 + length2 + 1] += c;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			x = 1;
		if (x)
			_putchar(result[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
