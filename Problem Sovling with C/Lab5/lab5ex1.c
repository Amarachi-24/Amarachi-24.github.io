# include <stdio.h>
int main()
{
    int count = 0;
    printf("using while loops\n");
    count = 1;
    while (count <= 19)
    {
        printf("%d ",count);
        count = count + 2;
    }
    printf("\n");

    printf("using while loops\n");
    for (count = 1; count <= 19 ; count = count + 2)
    {
        printf("%d ", count);

    }
    printf("\n");
    return 0;
}
