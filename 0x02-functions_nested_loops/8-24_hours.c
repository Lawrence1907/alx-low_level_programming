#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int a, i;

	for (a = 0; a < 24; a++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
