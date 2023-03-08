#include "main.h"

/**
 * factorial - computes the factorial of a given number using recursion
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
