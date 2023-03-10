#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: the number of arguments passed to the program.
 * @argv: an array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int total, i, n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (total >= coins[i])
		{
			total -= coins[i];
			n++;
		}
	}

	printf("%d\n", n);
	return (0);
}
