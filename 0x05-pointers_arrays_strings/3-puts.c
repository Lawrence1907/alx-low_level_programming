#include "main.h"


/**
 * _puts - Write a function that prints a string, follewd by a new line to stdout.
 * @str this my input string.
void _puts(char *str)
{
	int i;

	for (i =0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}
