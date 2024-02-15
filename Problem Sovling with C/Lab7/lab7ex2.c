#include <stdio.h>

/* Function prototypes */
void printfHello(void);
double compute(double val);
void display(double val, double result);

int main()
{
    double val;
    double result;
    
    /* Call printfHello function */
    printfHello();
    
    /* Compute and display the result for val = 0.5, 1, 1.5, 2, ..., 10 */
    for (val = 0.5; val <= 10; val += 0.5)
    {
        result = compute(val);
        display(val, result);
    }
    
    return 0;
}

/* Function to print a welcome message */
void printfHello(void)
{
    printf("Welcome to the equation computation program!\n");
}

/* Function to compute the equation */
double compute(double val)
{
    double result;
    
    result = 1 + (1 / val);
    
    return result;
}

/* Function to display the value of val and the result */
void display(double val, double result)
{
    printf("For val = %.5lf, the result is %.5lf\n", val, result);
}