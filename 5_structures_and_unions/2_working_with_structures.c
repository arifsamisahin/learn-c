#include <stdio.h>

int main()
{

    // A member of a structure may also be structures.
    typedef struct
    {
        int x;
        int y;
    } point;

    typedef struct
    {
        float radius;
        point center;
    } circle;

    circle c1 = {3.14, {2, 2}};

    printf("We have created circle with %.2f radius on %d, %d point. \n", c1.radius, c1.center.x, c1.center.y);

    return 0;
}