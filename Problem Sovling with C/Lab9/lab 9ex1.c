#include <stdio.h>
#include <string.h>

int main() {
    char fullname[80]; // declare character array fullname of size 80

    // Display the size of the name array using the sizeof() function
    printf("Size of fullname array: %lu\n", sizeof(fullname));

    // Ask the user to input his or her first name and second name
    printf("Enter your first name and last name: ");
    fgets(fullname, sizeof(fullname), stdin);

    // Compute the length of the string stored in fullname array using the strlen() function
    int length = strlen(fullname);
    printf("Length of fullname string: %d\n", length);

    // Check if the user's name is "Mary Dee" using the strcmp() function
    if (strcmp(fullname, "Mary Dee\n") == 0) {
        // Display a greeting message using the user's first name only
        char firstName[80];
        sscanf(fullname, "%s", firstName);
        printf("Hello, %s!\n", firstName);
    }

    return 0;
}