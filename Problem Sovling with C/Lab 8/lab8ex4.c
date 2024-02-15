#include <stdio.h>

int main() {
    int size_of_array = 10;
    int x[10] = {0}; /* initialize all elements of the array to zero */
    int i;
    FILE *input_fptr;

    /* Open file for reading */
    input_fptr = fopen("input.txt", "r");

    if (input_fptr != NULL) {
        /* Read 10 numbers from the file */
        for (i = 0; i < size_of_array; i++) {
            fscanf(input_fptr, "%d", &x[i]);
        }

        fclose(input_fptr);

        /* Display values in each element of array x */
        printf("Values in the array:\n");
        for (i = 0; i < size_of_array; i++) {
            printf("x[%d] = %d\n", i, x[i]);
        }
    } else {
        printf("Error – could not open the file\n");
    }

    return 0;
}
