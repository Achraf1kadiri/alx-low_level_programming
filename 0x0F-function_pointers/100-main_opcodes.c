#include <stdio.h>
#include <stdlib.h>

/**
 * main – A program that prints the opcodes of its own main  function.
 * @argc: Number of cmd-line arguments.
 * @argv: An array of strings.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int byt, i;
	char *mpointer;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	mpointer = (char *)main;

	for (i = 0; i < byt; i++)
	{
		if (i == byt - 1)
		{
			printf("%02hhx\n", mpointer[i]);
			break;
		}
		printf("%02hhx ", mpointer[i]);
	}
	return (0);
}
