#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - A func that appends text at the end of the file.
 * @filename: Is the name of the file.
 * @text_content: Is the null terminated string to add to the file's end.
 * Return: 1 for success, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	register int file, ww, length = 0;

	if (!(filename))
	{
		return (-1);
	}
	file = open(filename, O_WRONLY, O_APPEND);
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
