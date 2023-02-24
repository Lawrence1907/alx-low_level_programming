#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	usigned int i, c, k;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	k = i;
	c = 1;

	while (k > 9)
	{
		k /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((i / c) % 10) + 48);
	}
}
