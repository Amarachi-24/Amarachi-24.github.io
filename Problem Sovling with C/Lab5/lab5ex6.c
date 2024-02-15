#include <stdio.h>

int main() {
    int size;

    // Ask the user to enter the size and validate it
    int validSize = 0;
    while (!validSize) {
        printf("Enter the size of the Christmas tree: ");
        if (scanf("%d", &size) == 1 && size >= 3 && size <= 20) {
            validSize = 1; // Valid input, exit the loop
        } else {
            while (getchar() != '\n'); // Clear input buffer
            printf("Invalid input. Please enter a size between 3 and 20.\n");
        }
    }

    // Draw the Christmas tree
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i * 2 - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Draw the tree trunk
    for (int i = 1; i <= size / 3; i++) {
        for (int j = 1; j <= size - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
