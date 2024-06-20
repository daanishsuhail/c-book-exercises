/**
 * @file program2_7.c: program 2.7 from the book is intended to show the
 * behaviors of ineffective type conversions when assigning a negative number
 * to a positive number. Notably, this code is deeply implementation dependent.
 */

#include <stdio.h>

int main()
{
    int i;
    unsigned int stop_val;

    stop_val = 0;
    i = -10;
    while (i <= stop_val)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}