#include <stdio.h>
#include <stdlib.h>

void PrintFunc();

int main()
{
    int MyNumberArray [3] = {20,30,60}; // [3] - array dimension
    //printf("The size of the array is %d\n",  sizeof MyNumberArray/sizeof MyNumberArray[0]);
    int size = sizeof MyNumberArray/sizeof MyNumberArray[0];
    //printf("The size of array is: %d\n", size);
    PrintFunc(MyNumberArray, size);

    //PrintFunc(MyNumberArray1);
}

// Function to print the array
void PrintFunc(int PrintArray[],int size)
{

    printf("The size of array is: %d\n", size);
    for (int i=size; i>=0; i--)
    {
        printf("%d\n", PrintArray[i]);
    }
}

