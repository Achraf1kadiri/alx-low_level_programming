#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converting a string to an integer.
 * @s: Argument of the function.
 *
 * Return: The integer conversion of the string.
 */
int _atoi(char *s)
{
	int index, sign, result, length, foundDigit;

	index = 0;
	sign = 0;
	result = 0;
	length = 0;
	foundDigit = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && sign == 0)
	{
		if (s[index] == '-')
			++sign;

		if (s[index] >= '0' && s[index] <= '9')
		{
			foundDigit = s[index] - '0';
			if (sign % 2)
				foundDigit = -foundDigit;
			result = result * 10 + foundDigit;
			sign = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			sign = 0;
		}
		index++;
	}

	if (sign == 0)
		return (0);

	return (result);
}

/**
 * main - Program that multiplies 2 numbers.
 * @argc: Number of cmd-line arguments.
 * @argv: An array of strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
