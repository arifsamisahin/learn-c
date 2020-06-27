#include <stdio.h>

int main()
{
    /*
        *   c supports those and many other data types.
        *   int:    a whole nubmer
        *   float:  floating point, a number with a fractional part
        *   dobule: double-precision floating point value
        *   char:   single character 
    */

    // The amount of storage is required for each of these types varies by platform.
    // sizeof operator gives the memory requirements for a particular data type.

    printf("int:             %ld\n", sizeof(int));
    printf("float:           %ld\n", sizeof(float));
    printf("dobule:          %ld\n", sizeof(double));
    printf("char:            %ld\n", sizeof(char));

    /* 
        *   A variable is a name for an area in memory.
        *   the name of a variable (also called the identifier) must begin with either a letter or an underscore
        *   and can be composed of letters, digits, and the underscore character.
        *   Variables must also be declared as a data type before they are used.
        *   The C programming language is case-sensitive.
    */

    // For example, the following statements declare an integer variable my_var and then assings it the value 33.
    int my_var;
    my_var = 33;

    // You can also declare and initialize a variable in a single statemnt.
    int my_var_2 = 34;

    // Let's define variables of different types, do simple math and output the results
    int a, b;
    float price = 42.99;
    char letter = 'H';
    a = 12;
    b = 13;
    int c = a + b;

    printf("%d \n", c);
    printf("%f \n", price);
    printf("%c \n", letter);

    return 0;
}