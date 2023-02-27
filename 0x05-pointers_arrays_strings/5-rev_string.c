#include "main.h"
#include "string.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
