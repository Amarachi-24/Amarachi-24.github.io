#include<stdio.h>
void decrement (int x);
int main()
{
    int *ptr;
    int x = 100;
    decrement(x);
    ptr = &x;
    printf("x = %d\n",x);
    return 0;
}
void decrement(int x)
{
    int *ptr;
    int x = 100;
    x--;
}