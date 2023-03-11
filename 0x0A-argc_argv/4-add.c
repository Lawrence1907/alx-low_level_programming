#include <stdlib.h>
#include <cctype.h>
#include <string.h>
#include <stdio.h>

/**
 * check_num - check if string has digit
 * @str: array str
 *
 * Return: 0 Always.
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*chech if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of the progrma
 * @argc: count arguments
 * @argv: Arguments.
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	/*Delaring variables*/
	int count = 1, str_to_int, sum = 0;

	while (count < argc) /*goes though the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*converts string to int*/
			sum += str_to _int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
