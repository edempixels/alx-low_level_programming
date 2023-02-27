#include "main.h"
#include "string.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 *            terminating null byte, to the buffer pointed to by dest
 *
 * @dest: Buffer to copy string to
 * @src: String to copy
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
