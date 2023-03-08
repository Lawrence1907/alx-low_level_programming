#include "main.h"

/**
 * palind - obtains length of a.
 * @a: string
 * @l: integer to count length.
 *
 * Return: 1, On success.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palind(char *a)
{
	if (*a == '\0')
		return (0);
	else
		return (1 + palind(a + 1));
}

/**
 * palind2 - compares string vs string reverse.
 * @a: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 *
 * Return: 1, On success.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palind2(char *a, int n1, int n2)
{
	if (*(a + n1) == *(a + n2))
	{
		if (n1 == n2 || n2 + 1)
			return (1);
		return (0 + palind2(a, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palind2(s, 0, palind(s) - 1));
}
