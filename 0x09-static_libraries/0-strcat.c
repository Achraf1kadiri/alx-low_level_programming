nclude "main.h"
/**
 *  * _strcat - Combines 2 strings. 
 *   * @dest: Pointer to the destination string.
 *    * @src: Pointer to the source string to be combined.
 *     *
 *      * Return: A pointer to the dest string after the operation.
 *       */
char *_strcat(char *dest, char *src)
{
		int i;
			int j;

				i = 0;
					while (dest[i] != '\0')
							{
										i++;
											}
						j = 0;
							while (src[j] != '\0')
									{
												dest[i] = src[j];
														i++;
																j++;
																	}

								dest[i] = '\0';
									return (dest);
}
