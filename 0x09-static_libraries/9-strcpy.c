nclude "main.h"

/**
 *  * char *_strcpy - Copies a string from source to destination.
 *   * @dest: A pointer to the destination.
 *    * @src: A pointer to the source.
 *     * Return: The destination.
 *      */
char *_strcpy(char *dest, char *src)
{
		int i = 0;
			int j = 0;

				while (*(src + i) != '\0')
						{
									i++;
										}
					for ( ; j < i ; j++)
							{
										dest[j] = src[j];
											}
						dest[i] = '\0';
							return (dest);
}
