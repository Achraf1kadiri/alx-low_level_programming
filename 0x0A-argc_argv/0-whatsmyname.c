#include <stdio.h>

/**
 * main - It prints its name, followed by a newline.
 * @argc: Number of cmd-line arguments.
 * @argv: An array of strings.
 *
 * Return: 0 on success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
