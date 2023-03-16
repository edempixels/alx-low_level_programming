#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: a void pointer to the allocated memory
 * or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
