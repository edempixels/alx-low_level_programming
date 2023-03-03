#include <stdio.h>

/**
 * main - prints the value of a[2] as 98, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int a[5] = { 98, 102, 108, 115, 122 };
	int *p;

	p = &a[2];

	printf("a[2] = %d\n", *(p));
	return (0);
}
