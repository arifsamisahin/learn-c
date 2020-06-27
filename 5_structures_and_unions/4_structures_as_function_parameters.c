#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char title[50];
    float hours;
} course;

void update_course(course *class)
{
    strcpy(class->title, "C Fundementals");
    class->id = 12;
    class->hours = 12.12;
}

void display_course(course *class)
{
    printf("%d\t%s\t%3.2f\n", class->id, class->title, class->hours);
}

int main()
{
    course cs1;
    update_course(&cs1);
    display_course(&cs1);
    return 0;
}
