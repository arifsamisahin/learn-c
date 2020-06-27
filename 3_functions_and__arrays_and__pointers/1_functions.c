/*
    *   Functions are central to C programming and are used to accomplish a program solution as
    *   a series of subtasks.
    * 
    *   A function:
    *       - is a block of code that performs specific task
    *       - is reusable
    *       - makes a program easier to test
    *       - can be modified without changing the calling program
    *   
    *   Function declerations usually appear above the main() function.
    *       return_type function_name(parameters);
    * 
    *   Variables declared in a function are local to that block of code and cannot be refered to 
    *   outside the function.
*/

#include <stdio.h>

// Decleration
int square(int num);
int sum(int num_1, int num_2);
void print_sum(int num_1, int num_2);
void say_hello();

// Global variable
// Use them with caution, they can lead to hard to detect errors.
int global_1 = 10;

int main()
{
    int x, result;

    x = 5;

    result = square(x);
    printf("Square of %d is %d \n", x, result);

    int a = 5, b = 34;
    int result_1 = sum(a, b);

    printf("%d + %d = %d \n", a, b, result_1);

    print_sum(a, b);

    for (int i = 0; i < 5; i++)
        say_hello();

    return 0;
}

// Function
int square(int num)
{
    int result;
    result = num * num;

    return result;
}

// A function can take multiple parameters.
int sum(int num_1, int num_2)
{
    return num_1 + num_2;
}

// A function doesn't have to return any value
void print_sum(int num_1, int num_2)
{
    printf("Total >>> %d \n", num_1 + num_2);
}

/*
    *   Static variables have a local scope but are not destroyed when a function is exited.
    *   Therefore, a static variable retains its value for the life of the program and can be
    *   accessed every time the function is re-entered.
*/
void say_hello()
{
    static int counter = 0;
    counter++;
    printf("%d. Hello :) \n", counter);
}