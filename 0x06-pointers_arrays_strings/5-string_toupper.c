#include "main.h"

/**
 * string_toupper - All lowercase letters of a string to uppercase.
 * @p: is a pointer
 *
 * Return: p
 */

char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
