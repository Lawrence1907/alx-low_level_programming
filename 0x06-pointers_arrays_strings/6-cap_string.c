#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @n: is a pointer
 *
 * Return: n
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
			i++;

		if (n[i - 1] == ' ' || n[i - 1] == '\t' ||
			n[i - 1] == '\n' || n[i - 1] == ',' ||
			n[i - 1] == ';' || n[i - 1] == '.' ||
			n[i - 1] == '!' || n[i - 1] == '?' ||
			n[i - 1] == '"' || n[i - 1] == '(' ||
			n[i - 1] == ')' || n[i - 1] == '{' ||
			n[i - 1] == '}' || 1 == 0)

			n[i] -= 32;
		i++;
	}

	return (n);
}
