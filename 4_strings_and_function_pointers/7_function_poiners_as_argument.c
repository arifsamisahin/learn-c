#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int main()
{
    int arr[6] = {34, 1, 45, 33, 674, 234};
    int num, width;

    num = sizeof(arr) / sizeof(arr[0]);
    width = sizeof(arr[0]);

    qsort((void *)arr, num, width, compare);

    for (int i = 0; i < num; i++)
        printf("%d \n", arr[i]);

    return 0;
}

int compare(const void *elem1, const void *elem2)
{
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
}