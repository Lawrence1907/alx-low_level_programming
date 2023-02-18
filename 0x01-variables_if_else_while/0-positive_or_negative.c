/*
 * file-name: 0-positive_or_negative.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - Prints a random number and states whether its a positive, negative, or zero.
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
        {
                printf("%d", n, "is positive");
        } else if (n ==0)
        {
                printf("%d" , n, "is zero");

        } else  printf("%d" , n, "is stronger");
        return (0);
}
