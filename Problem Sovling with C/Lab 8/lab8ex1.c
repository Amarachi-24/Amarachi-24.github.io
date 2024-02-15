#include <stdio.h>

int main()
{
    int x[5]; /* declare array x to contain 5 integers */

    /* Assign values to array x */
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;
    x[4] = 5; /* note max index is 4 (size – 1) */

    /* Display values from array x */
    printf("x[0] = %d\n", x[0]);
    printf("x[1] = %d\n", x[1]);
    printf("x[2] = %d\n", x[2]);
    printf("x[3] = %d\n", x[3]);
    printf("x[4] = %d\n", x[4]);

    return 0;
}
