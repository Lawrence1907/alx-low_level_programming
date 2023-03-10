#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: This is the main C string to be scanned.
 * @accept: the bytes to include.
 * Return: the number of bytes in the initial segment of @s which consist only
 * bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, counter = 0, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					counter++;
				}
			}
		}
		else
			return (counter);
	}
	return (counter);
}
