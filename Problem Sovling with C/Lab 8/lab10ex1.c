/* program to illustrate the operation of pointers */
#include <stdio.h>

void demo_pointer(int *ptr); // Function prototype

int main()
{
    int x = 5; // Declare and initialize variable x
    int *ptr; // Declare pointer variable ptr
    ptr = &x; // Assign the address of x to ptr

    printf("main: &x = 0x%p\n",&x); // Print the address of x
    printf("main: ptr = 0x%p\n",ptr); // Print the value of ptr (address of x)
    printf("main: &ptr =0x%p\n",&ptr); // Print the address of ptr
    printf("main: x = %d\n",x); // Print the value of x
    printf("main: *ptr=%d\n",*ptr); // Print the value at the address stored in ptr (value of x)

    demo_pointer(ptr); // Call the demo_pointer function and pass ptr as an argument

    printf("main: x = %d\n",x); // Print the value of x
    printf("main: *ptr=%d\n",*ptr); // Print the value at the address stored in ptr (value of x)
}

void demo_pointer(int *ptr)
{
    *ptr = 7; // Change the value at the address stored in ptr to 7
    printf("\ndemo_pointer: ptr = 0x%p\n",ptr); // Print the value of ptr (address of x)
    printf("demo_pointer: &ptr = 0x%p\n",&ptr); // Print the address of ptr
    printf("demo_pointer: *ptr =0x%d\n",*ptr); // Print the value at the address stored in ptr (value of x)
}
