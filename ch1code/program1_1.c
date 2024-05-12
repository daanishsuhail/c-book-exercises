#include <stdio.h>
#include <stdlib.h>

/*
 * Tell the compiler that we intend to use a function called
 * show_message(). This function has no arguments and returns
 * no value. "Declaration"
 */
void show_message(void);

/*
 * Another function which includes body. "Definition"
 */
int main()
{
    int count;
    count = 0;
    while (count < 10)
    {
        show_message();
        count = count + 1;
    }
    exit(0);
}

void show_message(void)
{
    printf("Hello\n");
}