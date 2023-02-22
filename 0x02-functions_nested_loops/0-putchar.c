/*
 * file-name: 0-putchar.c
 */

#include <unistd.h>

/**
 * putchar - Prints an individual character from putchar
 *
 * Return: if successful it returns 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

