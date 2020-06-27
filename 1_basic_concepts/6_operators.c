/* 
    *   C supports arithmetic operators
    *   + addition
    *   - subtraction
    *   * multiplication
    *   / division
    *   % modulus division    
*/

#include <stdio.h>

int main()
{
    int lenght = 20;
    int height = 30;
    int area;

    area = lenght * height;
    printf("Area >>> %d \n", area);

    int i1 = 20;
    int i2 = 6;
    int quotient, remainder;

    quotient = i1 / i2;
    remainder = i1 % i2;
    printf("Quotient >>> %d \n", quotient);
    printf("Remainder >>> %d \n", remainder);

    float f1 = 23.33;
    float f2 = 2.32;
    float result = f1 / f2;
    printf("Float result >>> %f \n", result);

    // assignment operators
    int x = 3;
    x = x + 1;
    x += 1;
    x++;
    ++x;
    printf("%d \n", x);

    return 0;
}