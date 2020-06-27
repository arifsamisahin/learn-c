/*
    *   The do-while loops executes the loop statements before evaluating the expression to
    *   determine if the loop should be repeated.
*/

#include <stdio.h>

int main()
{
    int count = 0;

    do
    {
        printf("%d \n", count);
        count++;
    } while (count < 10); // note the semicolon

    /*
        *   The do-while loop always executes at least once, even the expression evaluates to false.
    */

    return 0;
}