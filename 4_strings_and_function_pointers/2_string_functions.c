#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // A formetted string can be created with sprintf() function. This is useful for build a string
    // from other data types.
    char info[100];
    char name[] = "Arif Sami";
    int age = 25;

    sprintf(info, "%s is %d years old", name, age);
    printf("%s \n", info);

    // Another useful function is sscanf().
    char info_1[] = "Arif 25";
    int read_age;
    char read_name[20];
    sscanf(info_1, "%s %d", name, &age);
    printf("Name    =>  %s \n", name);
    printf("Age     =>  %d \n", age);

    printf("    ---     \n");
    /*
        *
    */

    char s1[] = "The grey fox";
    char s2[] = " has jumped";

    // strcat(str1, str2) appends str2 to end of the str1 and return a pointer to str1.
    char *s3 = strcat(s1, s2);
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

    // strlen(str) returns the length of the string in str, not including the NULL.
    printf("s3 lenght   =>  %ld \n", strlen(s3));
    strcpy(s1, s2);
    printf("%s\n", s1);

    printf("    ---     \n");
    /*
        *
    */
    char input[10];
    int num;
    printf("Enter a number   >>>    ");
    fgets(input, 10, stdin);
    num = atoi(input);

    printf("You entered  >>> %d \n", num);

    printf("    ---     \n");

    /*
        * A two-dimensional array can be used to store related strings.
    */
    char trip[3][15] = {
        "powerbank",
        "chager",
        "laptop"};
    // An easier method
    char *trip_1[] = {
        "powerbank",
        "chager",
        "laptop"};

    printf("Do not forget to take ");
    for (int i = 0; i < 3; i++)
        printf("%s ", trip_1[i]);
    printf("\n");

    return 0;
}