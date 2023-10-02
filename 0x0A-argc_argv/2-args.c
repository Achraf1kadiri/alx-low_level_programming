#include <stdio.h>

/**
 * main - Prints the arguments that it receives.
 * @argc: Number of cmd-line arguments.
 * @argv: An array of strings.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
