#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	char leet[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = num[j];
			}
		}
	}

	return (s);
}
