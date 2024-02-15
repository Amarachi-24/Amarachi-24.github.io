#include <stdio.h>

int main()
{

    float R1;
    float R2;
    float R3;
    float Res;
    float parallel;


    printf("please enter you R1\n");
    scanf("%f",&R1);
    printf("please enter you R2\n");
    scanf("%f",&R2);
    printf("please enter you R3\n");
    scanf("%f",&R3);


     if(R1 <= 0 || R2 <= 0 || R3 <= 0)
    {
        printf("Error...\nResistance Value(s) cannot be negative or 0!");
    }
    else if(R1 > 1000 || R2 > 1000 || R3 > 1000)
    {
        printf("Error...\nResistance Value(s) are great than 1000!\n");
    }
    else    /* Program continues if conditions are met */
    {
        Res = R1 + R2 + R3;
        printf("The total of three Resistor is : %f\n",Res);
         /* Calculating resistors in parallel and displaying*/
        parallel = (1/((1/R1)+(1/R2)+(1/R3)));
        printf("\nHere is the result for resistors in parallel: %.2f\n", parallel);
    }

    return 0;
}

