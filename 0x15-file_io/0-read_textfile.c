#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - A function that reads a text file and print to POSIX.
 * @filename: The file to be read.
 * @letters: The amount of letters to be read and printed.
 * Return: The number of letters on success, 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int oo, rr, ww;
	register char *memory = malloc(sizeof(char)  * letters);

	if (memory == NULL)
	{
		free(memory);
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	oo = open(filename, O_RDONLY);
	rr = read(oo, memory, letters);
	ww = write(STDOUT_FILENO, memory, rr);

	if (oo == -1 || rr == -1 || ww == -1 || !(ww == rr))
	{
		free(memory);
		return (0);
	}
	free(memory);
	close(oo);
	return (ww);
}
