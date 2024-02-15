#include <stdio.h>

/* Function prototypes */
void display_line(int num_of_stars);
int get_size(void);
void draw_rectangle(int num_of_rows, int num_of_stars);

int main()
{
    int size = 0;

    /* Call get_size function and assign the returned size value to a variable */
    size = get_size();

    /* Call draw_rectangle function passing the size value */
    draw_rectangle(size, size * 2);

    return 0;
}

/* Function to get the size of the rectangle from the user */
int get_size(void)
{
    int size;

    /* Ask the user to input the size of the rectangle */
    printf("Please enter the size of the rectangle: ");

    /* Read in the size from the user */
    scanf("%d", &size);

    /* Return the size value */
    return size;
}

/* Function to draw a rectangle */
void draw_rectangle(int num_of_rows, int num_of_stars)
{
    int i;

    /* Draw the top side of the rectangle */
    for (i = 0; i < num_of_rows; i++) {
        display_line(num_of_stars);
    }
}

void display_line(int num_of_stars)
{
    int i;
    for (i = 0; i < num_of_stars; i++) {
        printf("*");
    }
    printf("\n");
}
