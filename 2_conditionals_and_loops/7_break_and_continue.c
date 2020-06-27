/*
    *   The break statement was introduced for use in the switch statemnt. It is also useful for
    *   immediately exiting a loop.
*/

#include <stdio.h>

int main()
{
    // int num = 0;

    // while (num < 10)
    // {
    //     if (num == 5)
    //         break;

    //     printf("%d \n", num);
    //     num++;
    // }

    /*
        *   When you want to remain in the loop, but skip ahead to the next iteration, you use continue statemnt.
    */

    int num_1 = 0;

    while (num_1 < 10)
    {
        num_1++;

        if (num_1 == 5)
            continue;

        printf("%d \n", num_1);
    } // As you can see value 5 is skipped.

    /*
        *   Althought the break and continue statements can be convenient, they should not be a substitue for a
        *   better algorithm.
    */

    return 0;
}