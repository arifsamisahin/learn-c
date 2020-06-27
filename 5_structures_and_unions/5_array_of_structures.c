#include <stdio.h>

typedef struct
{
    int h;
    int w;
    int l;
} box;

int main()
{
    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
    int volume = 0;

    for (int i = 0; i < 3; i++)
    {
        volume = boxes[i].w * boxes[i].h * boxes[i].l;
        printf("%d. box volume > %d\n", i + 1, volume);
    }
    return 0;
}