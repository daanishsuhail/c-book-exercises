/*
 * program1_4.c: A program meant to take a word and rearrange the letters
 * according to their char values.
 */
#include <stdio.h>
#include <stdlib.h>
#define ARRSIZE 10 // max size of words which are accepted.

int main()
{
    int ch_arr[ARRSIZE], count1; // defines an ARRSIZE lenth array and variable.
    int count2, stop, lastchar;

    lastchar = 0;
    stop = 0;

    /*
     * First we want to read the characters into the array
     * We stop if we're at the end of the line or we max out the array
     */
    while (stop != 1)
    {
        ch_arr[lastchar] = getchar();
        if (ch_arr[lastchar] == '\n')
        {
            stop = 1;
        }
        else
        {
            lastchar = lastchar + 1;
        }
        if (lastchar == ARRSIZE)
        {
            stop = 1;
        }
    }

    /*
     * Next, we apply bubblesorting.
     */

    count1 = 0;

    while (count1 < lastchar)
    {
        count2 = count1 + 1;
        while (count2 <= lastchar)
        {
            if (ch_arr[count1] > ch_arr[count2])
            {
                /* swap step */
                int temp;
                temp = ch_arr[count1];
                ch_arr[count1] = ch_arr[count2];
                ch_arr[count2] = temp;
            }
            count2 = count2 + 1;
        }
        count1 = count1 + 1;
    }

    count1 = 0;
    while (count1 <= lastchar)
    {
        printf("%c\n", ch_arr[count1]);
        count1 = count1 + 1;
    }
    exit(EXIT_SUCCESS);
}