#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: an array of pointers to the arguments
 *
 * Return: a pointer to a new string containing all the arguments, or NULL
 *         if memory allocation fails or ac == 0 or av == NULL.
 *         The string should contain each argument followed by a '\n'.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total_len += len + 1;
	}

	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[j++] = av[i][len++];
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
