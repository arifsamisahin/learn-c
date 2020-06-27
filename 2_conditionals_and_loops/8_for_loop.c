/*
    *   The for statement is a loop structure that executes statements a fixed number of times.
    *   for (initvalue; condition; increment) {
    *       statements;
    *   }
    * 
    *   The initvalue is a counter set to an initial value. This part of loop is performed only once.
    *   The condition is a Boolean expression that compares the counter to a value before each loop iteration,
    *   stopping the loop when false is returned.
    *   The increment increases (or decreases) the counter by a set value.   
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", i);
    }

    /*
        *   The for loop can contain multiple expressions seperated by commas in each part.
    */
    for (int a = 0, b = 10; a<5, b> 5; a++, b--)
    {
        printf("a >>> %d ", a);
        printf("b >>> %d \n", b);
    }

    // Also, you can skip the initvalue, condition and/or increment
    int c = 0;
    for (; c < 10; c++)
    {
        printf("c >>> %d \n", c);
    }

    // Loops can also be nested.
    int i, j;
    int col = 4, row = 7;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf("[%d][%d] ", i, j);
        }
        printf("\n");
    }

    /*
        *   A break in an inner loop exits that loop and execution continues with the outer loop.
        *   A continue statement works similarly in nested loops. 
    */

    return 0;
}