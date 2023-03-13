#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars,
 * initialises it with a specific char.
 * @size: size of an array.
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));

	if (ptr == 0 || ptr == NULL) 
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
