/* Program to demonstrate the built-in function sqrt()*/
#include <stdio.h>
/* Function prototype. */
void display_line(void); /* This is the function we will use in our
program */
int main()
{
printf("This program calls a function to draw a single line\n\n");
for (int i = 0; i < 10; ++i) {
display_line(); /* call function to draw a line */
}
printf("\nEnd of program\n\n");
return 0;
}
/* Function Definition */
void display_line(void)
{
printf("***********************\n");
}
