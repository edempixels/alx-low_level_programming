#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size of the allocated space for ptr, in bytes
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: If successful, a pointer to the newly allocated memory block;
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);

		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
	{
		free(ptr);
		return (NULL);
	}

	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}
