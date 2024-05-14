#define PI 3.14159265
#include <stdio.h>

/*
 * macropracticecircumference.c: A simple snippet using macros to
 * print out the circumference and area of a circle given some radius r.
 */
int main()
{
    int r = 6;

    double circumference = PI * 2 * 6;
    double area = PI * r * r;

    printf("Circumference: %f\nArea: %f\n", circumference, area);

    return 0;
}