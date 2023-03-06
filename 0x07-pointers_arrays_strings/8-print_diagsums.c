#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the array
 * @size: the size of an array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sum1 = 0, j = size - 1;

	while (i <= (size * size))
	{
		sum += a[i];
		i += size + 1;
	}

	while (j < (size * size - 1))
	{
		sum1 += a[j];
		j += size - 1;
	}

	printf("%d, %d\n", sum, sum1);
}
