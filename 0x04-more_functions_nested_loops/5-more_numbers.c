#include "main.h"

/**
 * more_numbers - Prints numbers from 0-14, followed by a new line.
 */

void more_numbers(void)
{
	int num, i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		
		_putchar('\n');
	}
}
