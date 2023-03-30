#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to search.
 * @size: the size of the array.
 * @cmp: the comparison function.
 *
 * Return: the index of the first element for which cmp does not return 0,
 *         -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}