#include "main.h"

/**
 * _islower - Checks that characters are lowercase/
 *@c: The character is ASCII code.

 * Return: 1 if c is a lowercase or else 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 97 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

