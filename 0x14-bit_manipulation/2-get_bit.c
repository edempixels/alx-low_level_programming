#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: Number to get bit from.
 * @index: Index starting from 0 of the bit to get.
 *
 * Return: Value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
