#include <stdio.h>

int main()
{

    // A void pointer is used to refer any address type in memory.
    int x = 33;
    float y = 12.4;
    char c = 'b';

    void *ptr;

    ptr = &x;
    printf("%d \n", *((int *)ptr));

    ptr = &y;
    printf("%f \n", *((float *)ptr));

    ptr = &c;
    printf("%c \n", *((char *)ptr));

    return 0;
}