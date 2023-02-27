#include "main.h"

/**
 * _puts - Prints a string to stdout followed by a new line
 * @str: The string to be printed
 *
 * Return: The number of characters printed
 */
int print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	return (i);
}
