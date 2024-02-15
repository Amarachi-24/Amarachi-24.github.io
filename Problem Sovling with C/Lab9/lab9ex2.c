#include <stdio.h>
#include <string.h>

int main()
{
    int array_size = 7;
    int i, studentnum[array_size], marks[array_size];
    char studentlet[array_size];
    float average = 0, sum = 0;

    FILE *fptr;
    fptr = fopen("studentMarks.txt", "r");

    if(fptr != NULL)
    {
        for(i=0; i<array_size; i++)
        {
            fscanf(fptr, "%c%5d\t%d\n", &studentlet[i], &studentnum[i], &marks[i]);
            sum += marks[i];
            printf("%c%5d\t%d\n", studentlet[i], studentnum[i], marks[i]);
        }
        fclose(fptr);
    }
    else
    {
        printf("ERROR - can't open file\n");
        return 1;
    }

    average = sum/array_size;
    printf("Average marks = %.2f", average);
    return 0;
}
