#include <stdio.h>

int main()
{

    // A structure is a user-defined data type that groups related variables of different data types.
    struct person
    {
        char name[30];
        int age;
    };

    struct person p1;
    struct person p2 = {"arif sami 2", 24};
    struct person p3 = {.name = "arif sami 3", .age = 25};

    p1 = (struct person){"arif sami 1", 23};

    printf("struct p1.name  =>  %s \n", p1.name);
    printf("struct p1.age   =>  %d \n", p1.age);

    // The typedef keyword creates a type definition that simplifies code and makes a program easier to read.
    typedef struct
    {
        int id;
        char title[40];
        float hours;
    } course;
    course c1;

    return 0;
}