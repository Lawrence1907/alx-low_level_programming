#include "main.h"

/**
 * rev_string - Prints strings in reverse.
 * @s: Is an input string.
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
}
