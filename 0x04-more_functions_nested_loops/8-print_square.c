#include "main.h"

/**
 * print_square - prints hashes sqaures.
 * @size: size of the sqaure.
 */
void print_square(int size)
{
	int i, k;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
