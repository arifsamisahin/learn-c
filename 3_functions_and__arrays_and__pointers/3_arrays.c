/*
    *   An array is a data structure that stores a collection of related values that are all the same type.
    *   Arrays are useful because they can represent related data  with one descriptive name rather than
    *   using seperate variables that each must be named uniquely.
    * 
    *   For example
    *       test_scores[25]
    *   can hold 25 test scores.
    * 
    *   An array is stored in contiguous memory locations and cannot change size after being declared.
*/

#include <stdio.h>

int main()
{
    int test_score[25]; // An array size 25

    float pieces[5] = {1.2, 3.14, 5.22, 6.34, 4.78};

    float pieces_1[5] = {1.2, 3.14}; // Missing values are set to zero.

    /*
        *   Then contents of an array is called elements with each element accessible by an index number.
        *   Index numbers start at 0.
        *   An array with 5 elements will have index numbers 0, 1, 2, 3, 4. 
    */

    int x[5] = {20, 45, 16, 18, 22};
    /*
        *   0 => 20
        *   1 => 45
        *   2 => 16
        *   3 => 18
        *   4 => 22
    */

    // printf("0. element is %d \n", x[0]);
    // printf("1. element is %d \n", x[1]);
    // printf("2. element is %d \n", x[2]);
    // printf("3. element is %d \n", x[3]);
    // printf("4. element is %d \n", x[4]);
    // It would be much easier to use loop for that
    for (int i = 0; i < 5; i++)
        printf("%d. element is %d \n", i, x[i]);

    // A value of an array element can be changed through an assignment statement.
    x[0] = 123;

    // Let's find out the total price
    float prices[3] = {10.99, 14.25, 90.50};
    float total_price = 0.0;
    for (int i = 0; i < 3; i++)
        total_price += prices[i]; // total_price = total_price + prices[i];

    printf("Total price => %.2f \n", total_price);

    // Let's multiply all elements with 3.14
    int prices_length = sizeof(prices) / sizeof(prices[0]); // Length of an array
    for (int i = 0; i < prices_length; i++)
        prices[i] *= 3.14;

    for (int i = 0; i < prices_length; i++)
        printf("%.2f, ", prices[i]);

    printf("\n");

    return 0;
}