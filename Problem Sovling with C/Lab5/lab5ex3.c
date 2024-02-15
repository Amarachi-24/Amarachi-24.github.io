#include <stdio.h>

int main() {
    int runningSum = 0;

    printf("x\tX^2\trunning sum\n");
    printf("----------------------\n");

    for (int x = 1; x <= 10; x++) {
        int square = x * x;
        runningSum += x;
        printf("%d\t%d\t%d\n", x, square, runningSum);
    }

    return 0;
}
