#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of cmd-line arguments.
 * @argv: An array of strings.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
