/**
 * @file program2_1.c: A file intended to demonstrate the casting behaviors for
 * operations involving both int and float values.
 *
 */

#include <stdio.h>

int f(void);

int main()
{
    printf("%d\n", f()); /* Calls and prints the returned int of f()*/
    return 0;
}

int f()
{
    /* Declarations */
    float f_var;
    double d_var;
    long double ld_var;

    /* Assigns the int 1 to each. The 1's get type-casted into their floating
     * equivalents */
    f_var = 1;
    d_var = 1;
    ld_var = 1;

    /* For these addition operations the lower float values is promoted to the
     * higher precision value and is then added. So on the next line, f_var is
     * promoted to a double and then added to d_var. Similar deal for ld_var
     * only now we must do an additional promotion to assign (d_var+f_var) to
     * a long double.
     */
    d_var = d_var + f_var;
    ld_var = d_var + f_var;

    return ld_var;
}