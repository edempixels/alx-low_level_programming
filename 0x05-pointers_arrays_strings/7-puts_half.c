#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half of a string.
 *
 * @str: The string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = strlen(str), i;

	for (i = (len + 1) / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
