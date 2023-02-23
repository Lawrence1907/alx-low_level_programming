/*
 * file-name: 0-positive_or_negative.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prints a random number and states whether
 *      its a positive, negative, or zero.
 *
 * Return: Always 0.
 */
void positive_or_negative(int i)
{

        /* your code goes there */
        if (i > 0)
                printf("%d is positive\n", i);
        else if (i < 0)
                printf("%d is negative\n", i);
        else
                printf("%d is zero\n", i);
}

