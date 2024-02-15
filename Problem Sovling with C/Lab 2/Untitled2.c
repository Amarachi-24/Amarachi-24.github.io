#include <stdio.h>
int main()
{
    int num1 = 400;
    int num2 = 200;
    int num3 = 10;
    int sum, sub, mult,div;


    /*
     * Performs all arithmetic operations
     */
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num2 / num3;

    /*
     * Prints the result of all arithmetic operations
     */
    printf("The sum of the given numbers : %d\n", sum);
    printf("The subtraction of the  numbers : %d\n", sub);
    printf("The multiplication of the numbers : %d\n", mult);
    printf("The divide of the numbers : %d\n", div);

    return 0;
}
