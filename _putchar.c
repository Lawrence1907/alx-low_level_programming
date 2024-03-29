#include <unistd.h>

/**
 * _putchar - writes the c character to stdout.
 * @c: the character to print
 * 
 * Return: On success 1.
 * On Error: -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
