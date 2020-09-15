#include<stdio.h>
#include<stdlib.h>

int getSum(int *array_val, int size)
{
    printf("%d\n", array_val[0]);
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum += array_val[i];
    }
    return sum;
}

int main()
{
    int my_array[4]={10,20,30,40};
    int mySum = getSum(my_array,4); // The array name itself is the address of first element of that array
                                    // For example if array name is arr then you can say that arr is equivalent to the &arr[0].

    printf("The sum of my_array elements is: %d\n", mySum);
}

