/*
    *   A string in C is an array of characters that ends with a NULL character '\0'.
*/

#include <stdio.h>
#include <string.h> // standart string library

int main()
{
    /*
        *   When you provide a string literal to initialize the string, the compiler automatically add a NULL
        *   character '\0' to the char array.
        *   For this reason, you must declare the array size to be at least one character longer than the
        *   expected string length.
    */
    char str1[6] = "Hello";
    char str2[] = "World";

    /*
        *   A string can also be declared as a set of characters. But you must be add the '\0'.
    */
    char str3[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str4[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    /*
        *   strlen()    get the lenght of a string
        *   strcat()    merge two strings
        *   strcpy()    copy one string to another
        *   strlwr()    convert string to lower case
        *   strupr()    convert string to upper case
        *   strrev()    reverse string
        *   strcmp()    compare two strings
    */

    printf("%ld \n", strlen(str1));

    char *merged_str = strcat(str1, str2);
    printf("merged_str  =>  %s \n", merged_str);

    char new_str[20];
    strcpy(new_str, merged_str);
    printf("new_str =>  %s \n", new_str);

    char name[50];
    int age;
    // printf("Please enter your name and age >>> ");
    // scanf("%s %d", name, &age);
    // printf("Your name   =>  %s \n", name);
    // printf("Your age    =>  %d \n", age);

    printf("Please enter your name >>> ");
    fgets(name, 50, stdin);
    printf("Your name   => ");
    fputs(name, stdout); // safer, prints out the name
    puts(name);          // prints out the name
    return 0;
}