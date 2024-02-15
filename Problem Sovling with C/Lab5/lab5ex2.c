#include <stdio.h>

int main() {
    int i = 0;
    int sum= 0;

    for (int i=1; i <= 10; i++)
    {
        sum = sum + i;
        printf("i= %d\tsum = %d\n",i, sum);
    }

    return 0;
}
