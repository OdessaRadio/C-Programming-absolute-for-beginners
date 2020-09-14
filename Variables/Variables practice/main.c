#include <stdio.h>

int main ()
{
    int var = 20; // actual variable initialization
    int *pointer; // pointer variable declaration
    pointer = &var; // taking address of the var variable and storing it in pointer variable

    printf("var variable address: %x\n", pointer);
    printf("taking the actual value of the variable using pointer: %d", *pointer);

    return 0;
}
