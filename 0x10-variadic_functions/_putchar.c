#include <unistd.h>

/**
 * _putchar - writes c character to stdout.
 * @c: character to print
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
