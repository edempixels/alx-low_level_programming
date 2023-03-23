#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The total number of arguments passed to the function.
 * @...: The variable arguments list.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
