/*
    *   A constant stores a value that cannot be changed from its initial assignment.
*/

#include <stdio.h>

// Let's define constant variable with the #define preprocessor directive.
/* 
    *   Before compilation, the preprocessor replaces every macro identifier in the code with its corresponding value 
    *   from the directive. In this case, every occurrence of PI is replaced with 3.14.
    *   The final code sent to the compiler will already have the constant values in place. 
    *   The difference between const and #define is that the former uses memory for storage and the latter does not.
*/
// Do NOT put a semicolon character at the end of #define statements. This is a common mistake.
#define PI 3.14

int main()
{

    // Or
    const float PI_1 = 3.14;

    printf("%f \n", PI);
    printf("%f \n", PI_1);
    return 0;
}