#include "main.h"
#include <stddef.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
