#include "main.h"

/*
 * print_alphabet_x10 - Prints alphabets 10 times.
 */

void print_alphabet_x10(void)
{
	int c, i;

	for (c = 0; c < 10; c++)
	{

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);

		}
		_putchar('\n');
	}
}
