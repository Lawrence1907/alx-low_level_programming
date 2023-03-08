#include "main.h"

/**
 * prime_num - Evaluates from 1 to n.
 * @i: same number as n.
 * @j: number that iterates from 1 to n.
 *
 * Return: 1, On success.
 * On error, -1 is returned
 */

int prime_num(int i, int j)
{
	if (i == j)
		return (1);

	else if (i % j == 0)
		return (0);

	return (prime_num(i, j + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @n: input value.
 *
 * Return: 1, On success
 * On error, 0 is returned.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_num(n, 2));
}
