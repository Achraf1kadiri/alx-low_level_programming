#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * checks_number - Checks string for digits.
 * @str: Argument of the function.
 *
 * Return: 0 on success.
 */
int checks_number(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))

	{
		if (!isdigit(str[i]))
		{
			return (0);
		}

		i++;
	}
	return (1);
}

/**
 * main - Adds positive numbers.
 * @argc: Number of cmd-line arguments.
 * @argv: An array of strings.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int j;
	int str_to_int;
	int sum = 0;

	j = 1;
	while (j < argc)
	{
		if (checks_number(argv[j]))

		{
			str_to_int = atoi(argv[j]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		j++;
	}

	printf("%d\n", sum);

	return (0);
}
