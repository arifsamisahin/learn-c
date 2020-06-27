/*
    *   The while statement is called a loop structure because it executes statements repeatedly while
    *   an expression true, looping over and over again.
*/
#include <stdio.h>

int main()
{
    int count = 0;

    while (count < 10)
    {
        printf("%d \n", count);
        count++;
    }

    /*
        *   An infinite loop is one that continues indefinitely because the loop condition never evaluates to false.
        *   This may cause a run-time error.
    */

    return 0;
}