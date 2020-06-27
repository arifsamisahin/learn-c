#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int number;
    int age;
};

void show_student_data(struct student *st)
{
    printf("\nStudent:\n");
    printf("Name    : %s\n", st->name);   // (*st).name
    printf("Number  : %d\n", st->number); // (*st).number
    printf("Age     : %d\n", st->age);    // (*st).age
}

int main()
{
    struct student s1;
    struct student s2;

    strcpy(s1.name, "Arif Sami 1");
    s1.age = 24;
    s1.number = 118;

    strcpy(s2.name, "Arif Sami 2");
    s2.age = 25;
    s2.number = 337;

    show_student_data(&s1);
    show_student_data(&s2);

    return 0;
}
