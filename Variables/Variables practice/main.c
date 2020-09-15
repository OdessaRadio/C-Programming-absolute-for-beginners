#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //char my_other_string[]="Hello"; // Another way of defining the string
    char string1[12]="Hello";
    char string2[12]="Hello";
    char string3[12];

    //printf("my_other_string value = %s\n", my_string);

    strcpy(string3,string1); // string3 - destination; string1 - source
    printf("string3 = %s\n", string3);

    strcat(string1,string2);
    printf("string1 = %s\n", string1);

    int len_string1;
    len_string1 = strlen(string1); // get string value
    printf("len_string1 = %d\n", len_string1);

    int var;
    var = strcmp (string2,string1);
    printf("var = %d\n", var);


    return 0;
}

