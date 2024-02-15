#include <stdio.h>

int main() {
    int size;

    // Ask the user to enter the size and validate it
    int validSize = 0;
    while (!validSize) {
        printf("Enter the size of the triangle (1-20): ");
        if (scanf("%d", &size) == 1 && size >= 1 && size <= 20) {
            validSize = 1; // Valid input, exit the loop
        } else {
            while (getchar() != '\n'); // Clear input buffer
            printf("Invalid input. Please enter a valid size between 1 and 20.\n");
        }
    }

    // Draw the right-angled triangle
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
