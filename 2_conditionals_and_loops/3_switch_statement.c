/*
    * The switch statements often provides a more elegant solution to nested if statements.
*/

#include <stdio.h>

int main()
{
    int num = 3;

    switch (num)
    {
    case 1:
        printf("One \n");
        break;
    case 2:
        printf("Two \n");
        break;
    case 3:
        printf("Three \n");
        break;
    case 4:
        printf("Four \n");
        break;

    default:
        printf("None of them \n");
        break;
    }

    /*
        *   A break statement is needed in each case to branch to the end of the switch statement.
        *   Without break statement, program execution falls through to the next case statement.
    */
    int score = 55;

    switch (score)
    {
    case 0 ... 49:
        printf("You couldn\'t pass the exam");
        break;
    case 50 ... 60:
        printf("You passed with low score");
    case 61 ... 79:
        printf("You have done good job.");
        break;
    case 80 ... 100:
        printf("You are so nerd");
        break;
    default:
        printf("Your score should be in range 0-100");
        break;
    }
    return 0;
}