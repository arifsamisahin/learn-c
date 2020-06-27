/*
    *   An array can not be passed by value to a function. However, an array name is a pointer,
    *   so just passing an array name to a function is passing a pointer to the array.
*/

#include <stdio.h>

int add_up(int *a, int length);
int *get_even_numbers();

int main()
{
    int orders[5] = {100, 220, 37, 16, 98};
    int total_orders = add_up(orders, 5);

    printf("Total orders is =>  %d \n", total_orders);

    int *a;

    a = get_even_numbers();
    for (int i = 0; i < 5; i++)
        printf("%d\n", a[i]); // *(a+i)

    return 0;
}

int add_up(int *a, int length)
{
    int total = 0;

    for (int i = 0; i < length; i++)
        total += a[i];

    return total;
}

int *get_even_numbers()
{
    // Note that when local variable is being passed out of a function, you need to declare it as static in the function.
    static int nums[5];
    int even = 0;

    for (int i = 0; i < 5; i++)
        nums[i] = even += 2;

    return nums;
}
