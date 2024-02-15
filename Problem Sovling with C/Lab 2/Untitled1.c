#include <stdio.h>
int main()
{
    int num1 = 100;
    int num2 = 200;
    int sum, sub, mult;
    int div;

    /*
     * Performs all arithmetic operations
     */
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    /*
     * Prints the result of all arithmetic operations
     */
    printf("The sum of the given numbers : %d\n", sum);
    printf("The difference of the given numbers : %d\n", sub);
    printf("The product of the given numbers : %d\n", mult);
    printf("The quotient of the given numbers : %f\n", div);

    return 0;
}
