#include <stdio.h>

int main() {
    int i;
    int x[10]; // declare array x to contain 10 integers
    int *ptr = x; // declare a pointer to reference the first element of the array

    // Assign values to the array x using a loop and the pointer
    for (i = 0; i < 10; i++) {
        *(ptr + i) = i + 1;
        printf("x[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}