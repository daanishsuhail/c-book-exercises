/**
 * @file program2_5.c: A snippet showcasing the printing of consecutive chars
 * after 'a'. Note that due to the way chars are stored that this code is by
 * design non-portable due to this.
 */

#include <stdio.h>

int main()
{
    /* Sets and assigns char c*/
    char c;

    c = 'a';

    /* Print loop */
    while (c <= 'z')
    {
        printf("value %d char %c\n", c, c);
        c = c + 1;
    }

    return 0;
}