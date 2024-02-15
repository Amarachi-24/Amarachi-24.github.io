#include <stdio.h>

int main() {
    int size_of_array = 10;
    int x[10] = {0}; /* initialise all elements of array to zero */
    int i;

    /* Ask user to enter 10 numbers */
    printf("Enter 10 numbers\n");
    for(i = 0; i < size_of_array; i++) {
        printf("Enter a number: ");
        scanf("%d", &x[i]);
    }

    /* Display values in each element of array x */
    for(i = 0; i < size_of_array; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}
