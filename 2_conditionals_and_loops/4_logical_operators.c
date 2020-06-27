/*
    *   Logical operators && and || are used to form a compound Boolean expression that tests multiple conditions. 
    *   A third logical operator is ! used to reverse the state of a Boolean expression.
*/

#include <stdio.h>

int main()
{
    //  The logical AND operator && returns a true result only when both expressions are true.
    int score = 65;

    if (score > 60 && score < 80)
    {
        printf("You are good \n");
    }
    else
    {
        printf("We donn\'t know. \n");
    }

    //  The logical OR operator || returns a true result when any one expression or both expressions are true.
    int letter = 'x';

    if (letter == 'x' || letter == 'X')
        printf("Your letter is x or X. \n");
    else
        printf("Your letter is not x or X \ns");

    //  The logical NOT operator ! returns the reverse of its value.
    if (!(letter == 'x' || letter == 'X'))
        printf("Your letter is not x or X \ns");
    else
        printf("Your letter is x or X. \n");

    return 0;
}