#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 */

void times_table(void)
{
	int i, a, n;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			n = a * i;
			if (n == 0)
			{
				_putchar(n + '0');
			}

			if (n < 10 && a != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
