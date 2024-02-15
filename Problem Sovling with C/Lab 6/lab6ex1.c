/* Program to demonstrate the built-in function pow() */
#include <math.h>
#include <stdio.h>


int main()
{
    int number;
    double result;

    printf("please enter a postive number ");
    scanf("%d",&number);
    // Storing the answer in result.
    result = pow(number, 10);

    printf("%d^10= %lf",number, result);

    return 0;
}
