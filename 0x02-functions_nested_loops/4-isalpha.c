#include "main.h"

/**
 * _isalpha - Checks for letter, lowercase or uppercase.
 * @c: The character in ASCII code.
 *
 * Return: 1 if its a letter, lowercase or uppercase.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c < 90) || (c >= 97 && c < 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
