/**
 * ch1/ex3.c: A solution to exercise 3 in chapter 1.
 */
#include <stdio.h>

int main()
{
    int typedString[10];
    int i = 0;
    int count1 = 0;

    /* While loop reads the string into the array */
    while (i < 10)
    {
        typedString[i] = getchar();
        if (typedString[i] != '\n')
        {
            typedString[i] = typedString[i] - '0'; /*'0' trick to get value. */
        }
        else
        {
            count1 = i;
            i = 10;
        }
        i++;
    }

    /* Step completes the requisite multiples of 10 */
    int count2 = count1;
    int k = 0;
    int temp;
    int tenPower;

    while (count1 > 0)
    {
        temp = count1;
        tenPower = 10;
        while (temp > 1)
        {
            tenPower = tenPower * 10;
            temp--;
        }
        typedString[k] = typedString[k] * tenPower;
        k++;
        count1--;
    }

    /* Divides the extra multiple of 10 and does the requisite addition. */
    k = 0;
    int finalValue = 0;
    while (k < count2)
    {
        finalValue = finalValue + typedString[k];
        k++;
    }

    finalValue = finalValue / 10;

    /* Prints the final values. */
    printf("The final value is %d\n", finalValue);

    return 0;
}