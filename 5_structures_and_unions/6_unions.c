/*
    *   A union allows to store different data types in the same memory location. It is like a
    *   structure because it has members. However, a union variable uses the same memory location
    *   for all its member's and only one member at a time can occupy the memory location.
*/

#include <stdio.h>

union val
{
    int int_num;
    float float_num;
    char str[20];
};

int main()
{
    return 0;
}