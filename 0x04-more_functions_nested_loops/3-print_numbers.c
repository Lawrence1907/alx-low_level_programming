#include "main.h"

/**
 * print_numbers - Prints numbers from 0 through 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
