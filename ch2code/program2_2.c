/**
 * @file program2_2.c: A simple demonstration for printing floating point
 * values.
 */

#include <stdio.h>

#define BOILING 212

int main()
{
    /* Declaration of variables */
    float f_var;
    double d_var;
    long double ld_var;
    int i;

    i = 0;
    printf("Fahrenheit to Centigrade\n");
    while (i <= BOILING)
    {
        ld_var = 5 * (i - 32);
        ld_var = ld_var / 9;
        d_var = ld_var;
        f_var = ld_var;

        printf("%d %f %f %Lf\n", i, f_var, d_var, ld_var);

        i = i + 1;
    }
    return 0;
}