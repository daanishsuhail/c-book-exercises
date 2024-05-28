/**
 * @file ex4.c: Solution to chapter 1 exercise 4.
 *
 */

#include <stdio.h>

/* Defines the max length of digits which can be typed in. */
#define DIGITLENGTH 256

int main()
{
    /* This piece is taken from solution 3.*/
    int typedString[DIGITLENGTH];
    int i = 0;
    int count1 = 0;

    /* While loop reads the string into the array */
    while (i < DIGITLENGTH)
    {
        typedString[i] = getchar();
        if (typedString[i] != '\n')
        {
            typedString[i] = typedString[i] - '0'; /*'0' trick to get value. */
        }
        else
        {
            count1 = i;
            i = DIGITLENGTH;
        }
        i++;
    }

    /* We then build an array of the correct size consisting only of
     * the digits which were typed in.  */

    printf("Digit count: %d\n", count1);

    int digitArr[count1];

    int arrayInsert = 0;
    while (arrayInsert < count1)
    {
        digitArr[arrayInsert] = typedString[arrayInsert];
        arrayInsert++;
    }

    /* Performs the bubble sort */

    int bubbleCount = 0;
    int digitPosition = 0;
    int bubbleCheck = 0;
    while (bubbleCount < (count1 - 1))
    {
        bubbleCount = 0;
        digitPosition = 0;
        while (digitPosition < (count1 - 1))
        {
            if (digitArr[digitPosition] > digitArr[(digitPosition + 1)])
            {
                int temp;
                temp = digitArr[digitPosition];
                digitArr[digitPosition] = digitArr[digitPosition + 1];
                digitArr[digitPosition + 1] = temp;
            }
            digitPosition++;
        }
        digitPosition = 0;
        while (digitPosition < (count1 - 1))
        {
            if (digitArr[digitPosition] <= digitArr[digitPosition + 1])
            {
                bubbleCount++;
            }
            digitPosition++;
        }
    }

    for (int m = 0; m < count1; m++)
    {
        printf("%d", digitArr[m]);
    }
    printf("\n");
    return 0;
}