#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: name to print
 * @f: pointer to a function that takes a char pointer as argument
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
