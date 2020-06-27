/*
    *   Pointers are especially useful with arrays. An array decleration reserves a block of
    *   contiguous memory addresses for its elements.
    *   With pointers, we can point to the first element and then use address arithmetic to 
    *   traverse the array.
*/

#include <stdio.h>

void swap(int *num_1, int *num_2);

int main()
{
    int a[5] = {11, 22, 33, 44, 55};

    int *ptr = NULL;

    // Array name act as a pointer to the first element of the array.
    ptr = a; // ptr = &a[0]

    for (int i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    for (int i = 0; i < 5; i++)
        printf("%d %p \n", *(ptr + i), ptr + i);

    /*
        *   To change the actual values of variables, the calling statement passes addresses to pointer
        *   parameters in a function.
    */
    int k = 25, l = 100;
    printf("k   =>  %d \nl  =>  %d \n", k, l);
    swap(&k, &l);
    printf("k   =>  %d \nl  =>  %d \n", k, l);

    return 0;
}

/*
    *   With pointer parameters, your functions can alter actual data rather than
    *   a copy of data.
*/
void swap(int *num_1, int *num_2)
{
    int temp;

    temp = *num_1;
    *num_1 = *num_2;
    *num_2 = temp;
}