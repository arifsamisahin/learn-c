/*
    *   C supports number of ways of taking user input.
*/
#include <stdio.h>

int main()
{

    // getchar() returns the value of next single character input.printf("Enter a character >>> \n");
    char letter = getchar();
    printf("Entered character >>> %c \n", letter);

    // scanf() scans the input that matches format specifiers.
    int number_1;
    // The & sign before the variable name is the address operator. It gives the address, or location in memory,
    // of a variable.
    printf("Enter an integer >>> \n");
    scanf("%d", &number_1);
    printf("Entered character >>> %d \n", number_1);

    // Let's prompt for two integer inputs and output their sum.
    // scanf() stops reading as soon as it encounters a space.
    int n_1, n_2;
    printf("Enter two integer >>> \n");
    scanf("%d %d", &n_1, &n_2);
    printf("%d + %d = %d \n", n_1, n_2, n_1 + n_2);

    // putchar() outputs a single character.
    printf("Letter is >>> ");
    putchar(letter);
    printf("\n");

    // puts() outputs a string
    char str[10] = "hello";
    printf("String is >>> ");
    puts(str);
    printf("\n");

    // formatted input
    int x;
    float num;
    char text[20];
    scanf("%2d %f %s", &x, &num, text);

    // formatted output
    /*
        *   \n new line
        *   \t horizontal tab
        *   \\ backslash
        *   \b backspace
        *   \' single quote
        *   \" double quote   
    */
    /*
        *   d decimal
        *   c character
        *   s string
        *   f float
        *   e sciencific notation
        *   x hexadecimal
    */
    printf("%d %f %s \n", x, num, text);
    printf("%5.3f \n", 3.12);
    printf("%6.3f \n", 3.12);
    printf("%7.3f \n", 3.12);
    printf("%8.3f \n", 3.12);
    printf("%9.3f \n", 3.12);

    return 0;
}
