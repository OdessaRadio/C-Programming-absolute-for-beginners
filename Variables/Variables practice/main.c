#include <stdio.h>

int main ()
{
    int var1 = 20; // actual variable initialization
    int var2 = 10;
    int *pointer; // pointer variable declaration

    int *pnt;
    pnt = &var2;

    // * - read the variable value by pointer address
    // & - take the address of the actual variable and store it in the pointer variable as address

    printf("The address of the var2 variable is: %x\n", pnt);
    printf("The value of the var2 is: %d\n", *pnt);
    printf("The address of the pointer variable pnt is: %x\n", &pnt); // taking address of the pointer variable
    printf("The value of the pointer variable pnt is: %x\n\n", pnt); // taking address of the pointer variable

    pointer = &var1; // taking address of the var variable and storing it in pointer variable

    printf("var variable address: %x\n", pointer);
    printf("taking the actual value of the variable using pointer: %d\n", *pointer);

    return 0;
}
