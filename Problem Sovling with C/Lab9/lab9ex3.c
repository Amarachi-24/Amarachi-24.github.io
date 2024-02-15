#include <stdio.h>
#include <string.h>

// Define the structure StudentRecord
struct StudentRecord {
    char name[80];
    int id;
    float averageMark;
    char programme[80];
};

int main() {
    // Declare two structure variables
    struct StudentRecord student1;
    struct StudentRecord student2;

    // Input values for student1
    printf("Enter the name of student1: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    printf("Enter the ID of student1: ");
    scanf("%d", &student1.id);
    printf("Enter the average mark of student1: ");
    scanf("%f", &student1.averageMark);
    getchar(); // Clear the newline character from the input buffer
    printf("Enter the programme of student1: ");
    fgets(student1.programme, sizeof(student1.programme), stdin);

    // Input values for student2
    printf("Enter the name of student2: ");
    fgets(student2.name, sizeof(student2.name), stdin);
    printf("Enter the ID of student2: ");
    scanf("%d", &student2.id);
    printf("Enter the average mark of student2: ");
    scanf("%f", &student2.averageMark);
    getchar(); // Clear the newline character from the input buffer
    printf("Enter the programme of student2: ");
    fgets(student2.programme, sizeof(student2.programme), stdin);

    // Compare the marks and display the result for student1
    if (student1.averageMark > 40) {
        printf("%s is passing.\n", student1.name);
    } else {
        printf("%s is not passing.\n", student1.name);
    }

    // Compare the marks and display the result for student2
    if (student2.averageMark > 40) {
        printf("%s is passing.\n", student2.name);
    } else {
        printf("%s is not passing.\n", student2.name);
    }

    return 0;
}