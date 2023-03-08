#include <unistd.h>

/**
 * _putchar - writes character c to stdout.
 * @c: character to print.
 *
 * Return: 1, On success.
 * On Error, -1.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
