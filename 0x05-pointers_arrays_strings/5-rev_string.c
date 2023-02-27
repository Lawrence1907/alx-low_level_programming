#include "main.h"

/**
 * rev_string - Prints strings in reverse.
 * @s: Is an input string.
 */

void rev_string(char *s)
{
	int i, len;
	char *begin, *end = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}

	len = i + 1;
	begin = s;
	for (i = 0; i < len / 2; i++)
	{
		char y;


		y = *end;
		*end = *begin;
		*begin = y;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
