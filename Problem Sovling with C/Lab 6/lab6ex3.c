 #include <stdio.h>

/* Function prototypes */
void draw_rectangle(int width, int height);
void display_line(int width);

int main() {
    int width, height;

    // Prompt the user to input the width and height of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);

    // Call the draw_rectangle function with user-input width and height
    draw_rectangle(width, height);

    printf("\nEnd of program\n\n");
    return 0;
}

/* Function to draw a rectangle */
void draw_rectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        // Call the display_line function for each line of the rectangle
        display_line(width);
    }
}

/* Function to display a line with a specified width */
void display_line(int width) {
    // Use the width parameter to determine the number of asterisks to print
    for (int j = 0; j < width; ++j) {
        printf("*");
    }
    printf("\n");
}
