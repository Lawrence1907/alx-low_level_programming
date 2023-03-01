#include "main.h"

/**
 * _strcat - Append src string to dest string
 * @dest: The first string
 * @src: The second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
