#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: a pointer to the first integer
 * @b: a pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
