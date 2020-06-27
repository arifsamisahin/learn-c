/*
    *   < less than
    *   <= less than or equal to
    *   > greater than
    *   >= greater than or equal to
    *   == equal to
    *   != not equal to
*/

#include <stdio.h>

int main()
{
    int score = 89;

    if (score < 75)
    {
        printf("You are good. \n");
    }

    if (score <= 75)
    {
        printf("Your score is 75. \n");
    }

    if (score > 75)
    {
        printf("You are great. \n");
    }

    if (score != 75)
    {
        printf("Your score is not equal to 75. \n");
    }

    if (score > 75)
    {
        printf("Your score is greater than 75 \n");
    }
    else
    {
        printf("Your score is less than 75 \n");
    }

    // conditional expressions
    int x = 3;
    int y;

    y = (x >= 5) ? 5 : x;
    /*
        *   This expression is equal to
        *   if(x >= 5)
        *       y = 5;
        *   else
        *       y = x;
    */

    printf("%d \n", y);

    return 0;
}