#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student {
    int id;             //members of the structure
    char name[20];      //
    float percentage;   //
};

int main()
{
    struct student record1; // record1 is a variable defined for student structure
    record1.id = 1;
    strcpy(record1.name, "John");
    record1.percentage = 70.2;

    printf("id = $d Name = %s Percentage = %f\n",record1.id, record1.name, record1.percentage );

    return 0;
}

