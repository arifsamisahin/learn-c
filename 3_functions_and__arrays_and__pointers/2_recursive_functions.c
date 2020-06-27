/*
    *   A recursive function is one that calls itself and includes a base case, or exit condition, for
    *   ending the recursive calls. In the case of computing, the base case is num equal to 1.  
    *   5! = 5 * 4 * 3 * 2 * 1
    * 
    *   A recursive solition requires a base case to prevent an infinite loop.
*/
#include <stdio.h>

int factorial(int num);

int main()
{
    int x = 5;
    int result;

    result = factorial(x);

    printf("%d! = %d \n", x, result);

    return 0;
}

int factorial(int num)
{
    if (num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}