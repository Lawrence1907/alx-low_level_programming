#include "main.h"

/**
 * sqrt_root - evaluates from 1 to n.
 * @i: same number as n.
 * @j: number that iterates from 1 to n.
 *
 * Return: 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */

int sqrt_root(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);

	return (sqrt_root(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input value
 * Return: 1, On success.
 * On error, -1 is returned, and erno is set appropriately.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_root(n, 1));
}

