#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Locates a substring.
 * @haystack: the string to search.
 * @needle: Search the occurrence of the substring in @haystack.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, s = 0;

	while (needle[s] != '\0')
		s++;


	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
