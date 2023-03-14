#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0 Always.
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, n, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)

			l++;

	}
		l += ac;

		ptr = malloc(sizeof(char) * l + 1);

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < ac; i++)
		{
			for (n = 0; av[i][n]; n++)
			{
				ptr[j] = av[i][n];
				j++;
			}

			if (ptr[j] == '\0')
			{
				ptr[j++] = '\n';
			}
		}

		return (ptr);
}
