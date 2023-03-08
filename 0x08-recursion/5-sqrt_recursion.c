#include "main.h"
/**
 * _sqrt_helper - Computes the natural square root of a number using recursion.
 * @n: The number to compute the square root of.
 * @start: The lower limit of the search range.
 * @end: The upper limit of the search range.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid, sqrt;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;
	sqrt = mid * mid;

	if (sqrt == n)
		return (mid);

	if (sqrt < n)
		return (_sqrt_helper(n, mid + 1, end));

	return (_sqrt_helper(n, start, mid - 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 1, n));
}
