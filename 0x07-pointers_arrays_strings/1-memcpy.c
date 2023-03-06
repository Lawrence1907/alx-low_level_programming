#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: where to copy the memory to.
 * @src: the memory area to copy from
 * @n: the number of bytes
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
