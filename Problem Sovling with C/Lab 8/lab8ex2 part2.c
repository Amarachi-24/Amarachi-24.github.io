#include <stdio.h>

int main()
{
    int i;
    int x[10]; /* declare array x to contain 10 integers */

    /* Assign values to the array x */
    for(i=0; i < 10; i++)
    {
        x[i] = i + 1;
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}
