#include<stdio.h>

void main()
{
    int MyArray [2][3]=
    {
    {1,2,3}, // row 1, index 0
    {4,5,6}  // row 2, index 1
    };

    for (int y=0; y<2; y++)
    {
        for (int x=0; x<3; x++)
        {
            printf("MyArray[%d][%d]=%d\n",y,x,MyArray[y][x]);
        }
        printf("\n");
    };
}
