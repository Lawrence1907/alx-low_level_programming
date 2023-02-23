#include "main.h"

/** print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */

void print_times_table(int n)
{
	int i, a, c;

	if (!(n > 15 || n < 0))
	{
		for (i =0; i <= n; i++)
		{
			for (a = 0; a <= n; a++)
			{
				c = (i * a);
				if (a != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (c < 10 && a != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				else if ( c >= 10 && c < 100)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0')
				}
				else if (c >= 100 && a != 0)
				{
					_putchar((c / 100) + '0')
					_putcha((c / 10) % 10 + '0'0);
					_putcha((c % 10) + '0');
				}
				else
					_putcha((c % 10) + '0');
			}
			_putcha('\n');
		}

	}
}
