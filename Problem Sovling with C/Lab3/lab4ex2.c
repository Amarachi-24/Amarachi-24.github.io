/*

Lab 3 Part 2 Exercise 3
Developer:  Nneoma Onwe
Date:       15/10/2023

*/
#include <stdio.h>
int main()
{
    /* Declaration */
    float Res = 0;
    float Volt = 0;
    float Power_disipation = 0;


    printf("Enter resistance value between 1 to 700 in Ohms: ");
    scanf("%f", &Res);

    printf("Enter a voltage value in between 10 to 50 Volts: ");
    scanf("%f", &Volt);

    /* Error checking */
    if(Res < 10 || Res > 700)
    {
        printf("Error \nResistance must be 1 to 700 Ohms!\n");
    }
    else if(Volt < 1 || Volt > 50)
    {
        printf("Voltage must be between 1 and 50 Volts!\n");
    }
    else    /* continues if conditions are met */
    {
        printf("Values have been successfully!");
        /* Calculating resistors in series and displaying*/
        Power_disipation = (Volt*Volt)/Res;
        printf("\nHere is the result for Power_disipation : %.2f Watts\n", Power_disipation);

        if(Power_disipation > 1)
        {
                printf("Wattage is above 1 Watts!!!\n");
        }
    }
    return 0;
}



