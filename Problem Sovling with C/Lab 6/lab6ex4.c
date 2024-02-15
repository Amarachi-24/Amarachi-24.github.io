 #include <stdio.h>

/* Function prototypes */
void display_hex(int decimal);

int main() {
    int decimal;

    // Prompt the user for input
    printf("Enter a decimal integer between 0 and 255: ");
    scanf("%d", &decimal);

    // Check if the entered value is within the valid range
    if (decimal >= 0 && decimal <= 255) {
        // Call the display_hex function to print the hexadecimal representation
        display_hex(decimal);
    } else {
        printf("Invalid input. Please enter a decimal integer between 0 and 255.\n");
    }

    return 0;
}

/* Function to display the hexadecimal representation of a decimal integer */
void display_hex(int decimal) {
    // Use the %x format specifier in printf to display the hexadecimal representation
    printf("Decimal: %d\nHexadecimal: 0x%02X\n", decimal, decimal);
}
