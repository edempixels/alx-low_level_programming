#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to capitalize.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 'a' - 'A';
			else
			{
				for (j = 0; sep[j]; j++)
				{
					if (sep[j] == s[i - 1])
					{
						s[i] -= 'a' - 'A';
						break;
					}
				}
			}
		}
	}
	return (s);
}
