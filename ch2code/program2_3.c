/**
 * @file program2_3.c: A simple snippet of code showing an application of char
 * arithmetic.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    char c;
    c = CHAR_MIN; // This CHAR_MIN from limits.h is the min value of char.

    do
    {
        printf("%d\n", c);
        c = c + 1;
    } while (c < CHAR_MAX);
    /* Loops through every char value possible */
    return 0;
}