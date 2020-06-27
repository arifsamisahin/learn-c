#include <stdio.h>

int main()
{
    int score = 40;

    if (score >= 90)
        printf("You are great. \n");
    else if (score >= 70)
        printf("You are good. \n");
    else if (score >= 50)
        printf("You are okay. \n");
    else
        printf("You could not pass. \n");

    return 0;
}