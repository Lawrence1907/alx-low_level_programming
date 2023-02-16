/*
 * file-name: 6-size.c
 */

#include <stdio.h>

/**
 * main - Prints the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char:%lu", sizeof(char), "byte(s)\n");
	printf("Size of an int:%lu", sizeof(int), "byte(s)\n");
	printf("Size of a long int:%lu", sizeof(long), "byte(s)\n");
	printf("Size of a long long int:%lu", sizeof(long long), "byte(s)\n");
	printf("Size of a float:%lu", sizeof(float), "byte(s)\n");

	return (0);
}
