#include "main.h"

/**
 * print_sign - Prints a number that is above, equal and nagative.
 *
 * @n: Input numbers as an integer.
 * Return: 1 is greater than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);

		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);

		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);

	}
	_putchar('\n');
	return (0);
}
