#include <stdio.h>

int main() {
    int size;

    int validInput = 0;

    while (!validInput) {
        // Ask the user to enter the size and validate it
        printf("Enter the size of the rectangle (1-20): ");
        if (scanf("%d", &size) == 1 && size >= 1 && size <= 20) {
            validInput = 1; // Set the flag to exit the loop
        } else {
            while (getchar() != '\n'); // Clear input buffer
            printf("Invalid input. Please enter a valid size between 1 and 20.\n");
        }
    }

    // Draw the rectangular shape
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size * 2; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
