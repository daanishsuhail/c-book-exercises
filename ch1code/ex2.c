/*
 * ex2.c: A solution to exercise 1.2.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int this_number, divisor, not_prime;
    this_number = 3;

    int previousprime = 3;

    while (this_number < 10000)
    {
        divisor = this_number / 2;
        not_prime = 0;
        while (divisor > 1)
        {
            if (this_number % divisor == 0)
            {
                not_prime = 1;
                divisor = 0;
            }
            else
            {
                divisor = divisor - 1;
            }
        }
        if (not_prime == 0)
        {
            if ((this_number - previousprime) == 2)
            {
                printf("Primes %d and %d have difference 2.\n", this_number, previousprime);
            }
            previousprime = this_number;
        }
        this_number = this_number + 1;
    }
    exit(EXIT_SUCCESS);
}