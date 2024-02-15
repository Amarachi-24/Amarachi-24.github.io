#include <stdio.h>

int main() {
    int size_of_array = 10;
    char ch[10] = {0}; /* initialize all elements of character array to zero */
    int x[10] = {0};   /* initialize all elements of integer array to zero */
    int i;
    FILE *input_fptr;

    /* Open file for reading */
    input_fptr = fopen("input2.txt", "r");

    if (input_fptr != NULL) {
        /* Read 10 pairs of character and integer from the file */
        for (i = 0; i < size_of_array; i++) {
            fscanf(input_fptr, "%c %d\n", &ch[i], &x[i]);
        }

        fclose(input_fptr);

        /* Display values in each element of both arrays */
        printf("Values in the arrays:\n");
        for (i = 0; i < size_of_array; i++) {
            printf("ch[%d] = %c\n", i, ch[i]);
            printf("x[%d] = %d\n", i, x[i]);
        }
    } else {
        printf("Error – could not open the file\n");
    }

    return 0;
}
