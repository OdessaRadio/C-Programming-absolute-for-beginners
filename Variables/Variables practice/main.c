#include<stdio.h>
#include<stdlib.h>



void main()
{
    int val_array[3]={30,40,50};
    int *pointer_array[3];

    for(int i=0; i<3; i++)
    {
        pointer_array[i]=&val_array[i];
        printf("Array element %d has address %x\n",*pointer_array[i], pointer_array[i]);
    }



}

