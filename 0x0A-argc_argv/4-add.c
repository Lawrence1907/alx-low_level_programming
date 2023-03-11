#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the progrma
 * @argc: count arguments
 * @argv: Arguments.
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{

			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum); /*print sum*/
	}
	return (0);
}
