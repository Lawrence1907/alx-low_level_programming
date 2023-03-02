#include "main.h"

/**
<<<<<<< HEAD
 * _strncpy - copies strings
 * @dest: input value
 * @src: input value
 * @n: input value
=======
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: number of string to be copied
>>>>>>> f11dbbbe715cac73770130de35a2dad02e20a0ba
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
<<<<<<< HEAD
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
=======
	int j = 0, i = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
>>>>>>> f11dbbbe715cac73770130de35a2dad02e20a0ba
	}

	return (dest);
}
