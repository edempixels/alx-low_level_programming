#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: 0 is success;
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
