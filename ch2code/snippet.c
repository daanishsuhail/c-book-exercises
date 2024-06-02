/**
 * @file snippet.c: This is the snippet document for Ch. 2 where all features
 * of C described in Ch.2 are tested.
 */

/* ??= include <stdio.h>
??= define PI 3.1415

int main()
??<
    printf("Hello world\n");
??>*/
// Some code which was designed to work with trigraphs with gcc -trigraphs

#include <stdio.h>
#include <math.h>

int main()
{
    /* A simple example showcasing line breaks in code. */
    int a, fred, bill, this, that = 0;
    /* Long line below */
    a = fred + bill * ((this / that) * sqrt(3.14159));
    /* Same line */
    a = fred + bill *
                   ((this / that) * sqrt(3.14159));

    /* Example using \'newline' or 'backslash and newline; */

    printf("First line"
           "second line");

        return 0;
}