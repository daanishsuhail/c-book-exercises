/**
 * @file program2_4.c: A snippet which demonstrates reading input and counts
 * relevant punctuation on a line of text.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Declarations. */
    int this_char, comma_count, stop_count;

    /* Gets the first char */
    comma_count = stop_count = 0;
    this_char = getchar();

    /* Loop. *Note Ctrl-D gives us the EOF value defined in stdiolh  */
    while (this_char != EOF) // works more cleanly with \n being the new line.
    {
        if (this_char == '.')
        {
            stop_count = stop_count + 1;
        }
        if (this_char == ',')
        {
            comma_count = comma_count + 1;
        }
        this_char = getchar();
    }
    printf("%d commas, %d fullstops\n", comma_count, stop_count);

    return 0;
}