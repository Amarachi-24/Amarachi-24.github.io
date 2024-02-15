#include <stdio.h>

/* Function prototypes */
int get_input(void);
float calculate_average(int num1, int num2, int num3);
int find_highest(int num1, int num2, int num3);
int find_lowest(int num1, int num2, int num3);
int count_greater_than_average(int num1, int num2, int num3, float average);

int main()
{
    int num1, num2, num3;
    float average;
    int highest, lowest;
    int count;

    /* Call get_input function to get three integer values */
    num1 = get_input();
    num2 = get_input();
    num3 = get_input();

    /* Call calculate_average function to calculate the average value */
    average = calculate_average(num1, num2, num3);

    /* Call find_highest function to find the highest value */
    highest = find_highest(num1, num2, num3);

    /* Call find_lowest function to find the lowest value */
    lowest = find_lowest(num1, num2, num3);

    /* Call count_greater_than_average function to count how many numbers are greater than the average value */
    count = count_greater_than_average(num1, num2, num3, average);

    /* Display the results */
    printf("Average value: %.2f\n", average);
    printf("Highest value: %d\n", highest);
    printf("Lowest value: %d\n", lowest);
    printf("Number of values greater than average: %d\n", count);

    return 0;
}

/* Function to get input from user */
int get_input(void)
{
    int num;

    /* Ask user to input a number */
    printf("Please enter a number: ");

    /* Read in the number from user */
    scanf("%d", &num);

    /* Return the number */
    return num;
}

/* Function to calculate the average value */
float calculate_average(int num1, int num2, int num3)
{
    float average;

    /* Calculate the average value */
    average = (num1 + num2 + num3) / 3.0;

    /* Return the average value */
    return average;
}

/* Function to find the highest value */
int find_highest(int num1, int num2, int num3)
{
    int highest;

    /* Find the highest value */
    highest = num1;
    if (num2 > highest)
    {
        highest = num2;
    }
    if (num3 > highest)
    {
        highest = num3;
    }

    /* Return the highest value */
    return highest;
}

/* Function to find the lowest value */
int find_lowest(int num1, int num2, int num3)
{
    int lowest;

    /* Find the lowest value */
    lowest = num1;
    if (num2 < lowest)
    {
        lowest = num2;
    }
    if (num3 < lowest)
    {
        lowest = num3;
    }

    /* Return the lowest value */
    return lowest;
}

/* Function to count how many numbers are greater than the average value */
int count_greater_than_average(int num1, int num2, int num3, float average)
{
    int count = 0;

    /* Check if each number is greater than the average value */
    if (num1 > average)
    {
        count++;
    }
    if (num2 > average)
    {
        count++;
    }
    if (num3 > average)
    {
        count++;
    }

    /* Return the count */
    return count;
}

