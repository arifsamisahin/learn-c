/*
    *   An array of function pointers can replace a switch or an if statement for choosing an action.
*/
#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main()
{
    int number_1, number_2, choice, result;

    int (*op[4])(int, int);

    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;

    printf("Please enter two number     >>> ");
    scanf("%d %d", &number_1, &number_2);
    printf("\nPlease select the proccess    >>>\n0 - Add\n1 - Subtract\n2 - Multiply\n3 - Divide\n");
    scanf("%d", &choice);
    result = op[choice](number_1, number_2);

    printf("The result  =>  %d \n", result);

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    return num1 / num2;
}
