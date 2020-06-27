/*
    *   C is designed to be a low-level language that can easily access memory locations and
    *   perform memory-related operations.
    * 
    *   For instance, the scanf() functin places the value entered by the user at the location,
    *   or address, of the variable. This is accomplished by using & symbol.
*/
#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter a number >>> ");
    scanf("%d", &num);

    printf("You entered %d \n", num);
    printf("The address >>> %p \n", &num);

    /*
        *   Pointers are very important in C programming because they allow you to easily work
        *   with memory locations.
        *   A pointer is a variable that contains the address of another variable. In other words,
        *   it "points" to the location assigned to a variable and can indirecly access the variable.
    */
    int i = 34;
    int *p = NULL;

    p = &i;

    printf("Address of i        =>  %p \n", &i);
    printf("p contains address  =>  %p \n\n", p);

    printf("Value of i              => %d \n", i);
    printf("p is pointing the value => %d \n", *p);

    /*
        *   - Pointers should be initialized to NULL until they are assigned to a valid location.
        *   - Pointers can be assigned the address of a variable using the ampersand & sign.
        *   - To see what a pointer is pointing to, use the * again, as in *p. In this case * is called
        *   the indirection or dereference operator. The proccess is called dereferencing.
    */

    // Some algorithm use a pointer to pointer.
    int x = 12;
    int *p_1 = NULL;
    int **p_2 = NULL;

    p_1 = &x;
    p_2 = &p_1;

    printf("%d, ", *p_1);
    printf("%d \n", **p_2);

    /*
        *   Pointers can be used in expressions just as any variable. Arithmetic operators can be applied to
        *   whatever the pointer is pointing.
    */

    int result = *p_1 + **p_2;
    printf("Sum of *p_1 and **p_2   =>  %d \n", result);

    // x variable can be incremented via pointer
    (**p_2)++;
    printf("x incremented via pointer   =>  %d \n", x);

    return 0;
}
