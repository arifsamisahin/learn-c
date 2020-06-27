/*
    *   A two-dimensional array is an array of arrays and can be thought of as a table. You can also
    *   think of a two-dimensional array as a grid for representing a chess board, city blocks etc.
    *   A two-dimensional array decleration indicates the number of number rows and the number of columns.
    * 
*/
#include <stdio.h>

int main()
{
    int a[2][3]; // 2 X 3 array
                 /*
        *   3 2 6
        *   1 5 9
    */

    // Initializing
    int b[2][3] = {
        {3, 2, 6},
        {1, 5, 9}};

    // An array can have more than two dimensions.
    int c[2][3][4];

    // Accessing one element
    printf("b[1][1] => %d \n", b[1][1]);

    // Printing all b elements
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d, ", b[i][j]);
        printf("\n");
    }

    // Sum of all b elements
    int sum_of_b = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            sum_of_b += b[i][j];

    printf("Sum of all b elements => %d \n", sum_of_b);

    return 0;
}