//This program calculates current based on Ohm's Law//
#include <stdio.h>

int main() {
    //variable fo user input //
    float voltage = 0;
    float resistance = 0;
    float current;


    printf("This program calculates current based on Ohm's Law.\n");
    printf("please enter a  value for volages\n");
    scanf("%f",& voltage);
    printf("please enter a  value for Resistance\n");
    scanf("%f",& resistance);

    // loop only if user inmput invaild value
    while(resistance < 10 || resistance > 1000)
    {
        printf("Error/n please re-enter a value resistance\n");
        scanf("%f",& resistance);

    }
    // Now, you can perform any calculations or further actions as needed
    // For example, calculating the current based on Ohm's Law:

    current = 1000 * voltage / resistance;
    printf("The calculated current (I) is: %.2f millamps\n", current);
    return 0;
}
