#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - A function that creates a file.
 * @filename: Is the name of the file to be created.
 * @text_content: Is a NULL terminated string to write on the file.
 * Return: 1 for succes, -1  otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	register int file, ww, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[length])
		{
			length++;
		}
		ww = write(file, text_content, length);
		if (ww == -1)
		{
			return (-1);
		}
	}
	close(file);
	return (1);
}
