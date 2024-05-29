/**
 * @file ex5.c: A solution to exercise 5 for chapter 1.
 */

#include <stdio.h>

#define ARRSIZE 256 /* Defines how big the input window is. */

int main()
{
    int typedString[ARRSIZE];
    int i = 0;
    int count1 = 0;

    /* While loop reads the string into the array */
    while (i < ARRSIZE)
    {
        typedString[i] = getchar();
        if (typedString[i] != '\n')
        {
            typedString[i] = typedString[i] - '0'; /*'0' trick to get value. */
        }
        else
        {
            count1 = i;
            i = ARRSIZE;
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
    int hexValue = finalValue;
    int binaryValue = finalValue;

    /* Prints the decimal values. */
    printf("Decimal: %d\n(Left LSB) Binary: ", finalValue);

    /* Prints out the number in binary left bit is LSB. */
    while (binaryValue != 0)
    {
        printf("%d", binaryValue % 2);
        if ((binaryValue % 2) == 1)
        {
            binaryValue = binaryValue - 1;
        }
        binaryValue = binaryValue / 2;
    }
    printf("\n");

    /* Prints the values in hex */
    int hexChars[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

    printf("(Left LSB)Hexadecimal Value: ");
    while (hexValue != 0)
    {
        if ((hexValue % 16) > 9)
        {
            printf("%c ", hexChars[(hexValue % 16) - 10]);
        }
        else
        {
            printf("%d ", hexValue % 16);
        }
        if ((hexValue % 16) != 0)
        {
            hexValue = hexValue - (hexValue % 16);
        }
        hexValue = hexValue / 16;
    }
    printf("\n");

    return 0;
}