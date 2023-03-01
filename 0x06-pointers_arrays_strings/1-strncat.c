#include "main.h"

/**
 * _strncat - Concatenates two string
 * and use n characters from src.
 * @dest: First value.
 * @src: Second value.
 * @n: number of characters to be used.
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
