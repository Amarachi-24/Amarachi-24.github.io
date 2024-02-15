#include <stdio.h>

int main() {
    int studentCount;
    int totalStudents = 0;
    int labNumber = 1;

    printf("Enter the number of students in each computer lab (or -1 to finish):\n");

    printf("Lab%d: ", labNumber);
    scanf("%d", &studentCount);

    while (studentCount != -1) {
        if (studentCount >= 0 && studentCount <= 20) {
            totalStudents += studentCount;
            labNumber++;
        } else {
            printf("Invalid input. Please enter a value between 0 and 20.\n");
        }

        printf("Lab%d: ", labNumber);
        scanf("%d", &studentCount);
    }

    printf("Total number of students in attendance: %d\n", totalStudents);

    return 0;
}






