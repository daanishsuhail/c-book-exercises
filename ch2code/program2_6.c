/**
 * @file program2_6.c: This program was designed to demonstrate how unsigned
 * integers are incapable of overflowing.
 */

#include <stdio.h>

int main()
{
    unsigned short x; // Original code used an int but an int was too large
    x = 0;
    while (x >= 0)
    {
        printf("%d\n", x);
        x = x + 1;
    }

    return 0;
}