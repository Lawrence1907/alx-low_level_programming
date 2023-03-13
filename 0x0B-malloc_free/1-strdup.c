#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: is a char
 * Return: pointer to the duplicated string, NULL if fail.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		ptr[j] = str[j];

	return (ptr);
}
