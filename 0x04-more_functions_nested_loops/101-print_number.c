#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	usigned int i;

	int m, b;

	b = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		i = n;
	while (i / b > 9)
	{
		b = b * 10;
	}
	while (b > 0)
	{
		m = i / b;
		i = i % b;
		_putchar (m + '0');
		b = b / 10;
	}
	}
}

