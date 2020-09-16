#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//struct student { // struct members are allocated in the dedicated memory area
//    int myInt;
//    char myChar;
//};

union myUnion{      // union allocate memory size according to the max size of memebers.
    int myInt;  //4 bytes -> union memory allocation. All members inside union same memory is used
    char myChar;//1 byte
    float myFloat;
};

int main()
{
    union myUnion uni;

    uni.myInt = 4; // this member overwrite the memory with int 4 bytes
    uni.myChar = 9;
    uni.myFloat = 0.5;

    printf("%i \n",uni.myChar);
    printf("%i \n",uni.myInt);
    printf("%i \n",uni.myFloat);
    printf("%d \n",sizeof(uni));

    return 0;
}

