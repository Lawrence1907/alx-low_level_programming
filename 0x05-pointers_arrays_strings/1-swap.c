#include "main.h"

/**
 * swap_int- Swaps two integers.
 * @a: the value of a is given to b.
 * @b: the value of b is given to a.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
