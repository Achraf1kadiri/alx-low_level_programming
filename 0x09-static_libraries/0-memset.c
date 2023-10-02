nclude "main.h"
/**
 *  * _memset - Filss a block of memory with a specific value.
 *   * @s: Pointer to the starting address to be filled.
 *    * @b: The desired value to fill the memory.
 *     * @n: Numbr of bytes to be changed and filled.
 *      *
 *       * Return: A pointer to the modified memory.
 *        */
char *_memset(char *s, char b, unsigned int n)
{
		int i = 0;

			for (; n > 0; i++)
					{
								s[i] = b;
										n--;
											}
				return (s);
}
