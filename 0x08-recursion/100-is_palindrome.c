#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i, j;

	if (len == 0 || len == 1)
		return (1);
	i = 0;
	j = len - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}
