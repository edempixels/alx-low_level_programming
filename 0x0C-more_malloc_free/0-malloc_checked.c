#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of the memory block to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
