#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - A program that copies the content of a file to another.
 * @argc: Number of cmd-line arguments.
 * @argv: An array of strings.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int file1, file2, rr, cpx1, cpx2;
	char memory[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((rr = read(file1, memory, 1024)) > 0)
	{
		if (file2 < 0 || (write(file2, memory, rr) != rr))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (rr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cpx1 = close(file1);
	if (cpx1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file1), exit(100);
	}
	cpx2 = close(file2);
	if (cpx2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2), exit(100);
	}
	return (0);
}
