/*
    *   Since pointer can point to an address in a memory location, then can also point to the start
    *   of executable code.
    *   Pointers to functions, or function pointers point to executable code for a function in memory.
    *   Function pointers can be stored in an array or passed as arguments to other functions.
    *   return_type (*func_name)(parameters) 
*/
#include <stdio.h>

void say_hello(int num_times);

int main()
{
    void (*funptr)(int);
    funptr = say_hello;
    funptr(3);
    // say_hello(5);

    return 0;
}

void say_hello(int num_times)
{
    int k;
    for (int i = 0; i < num_times; i++)
        printf("Hello \n");
}