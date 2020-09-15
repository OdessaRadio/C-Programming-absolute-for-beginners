#include <stdio.h>
#include <stdlib.h>

extern int point_test();
extern int if_else();
extern int ternary();
extern int switch_case();
extern int do_while_loop ();
extern int for_loop ();

void print_func();

// Practicing functions
int main()
{
    print_func();
}

void print_func() // void means function will return nothing
{
    printf("sum=%d\n", 10+25);
    printf("We are inside a print_func\n");
}


// For loop
int for_loop ()
{
    for (int i=1,y=100; i<y; i++, y--)
    {
        printf("i = %d, y = %d\n", i,y);
    }
}

// Do While loops
int do_while_loop ()
{
    int i=0;
    int y=0;

    do
    {
    printf("Variable i = %d\n", i);
    i++;
    } while (i>10);

    printf("**********\n");

    while(y>10)
    {
        printf("Variable y = %d\n", y);
        y++;
    }

}


// Practice switch case
int switch_case()
{
    int mark;
    printf("Enter mark:");
    scanf("%d", &mark);

    switch(mark)
    {
    case 95:
    case 90:
        printf("Excellent");
        break;
    case 80:
        printf("Very Good");
        break;
    case 50:
        printf("Good");
        break;
    case 30:
        printf("Poor");
        break;
    case 10:
        printf("Bad");
        break;
    default:
        printf("You need to reexamine\n");
    }

}

// Practice ternary operator
int ternary()
{
    // The ternary or conditional operator in C
    // logical expression ? if true :  if false
    printf("Find the greatest number\n\n");
    int a,b,c;
    printf("Enter digit1:");
    scanf("%d'", &a);
    printf("Enter digit2:");
    scanf("%d", &b);

    c = (a>b)?a:b;
    printf("The greatest number is: %d", c);
}


// Practice If ELSE
int if_else()
{
    int age;
    printf("Please, etner your age: ");
    scanf("%d", &age); // storing user input data in the address of the age actual variable
    printf("Entered text is: %d\n\n", age);

    if (age>18)
        {
        printf("The age is greater than 18\n");
        if (age<21)
        {
            printf("The age is less than 21\n");
        }
        }
    else if (age==18)
        {
        printf("The age is equal to 18\n");
        }
    else
        {
        printf("The age is lower than 18\n");
        }
}

// Practice pointers
int point_test ()
{


    int var1 = 20; // actual variable initialization
    int var2 = 10;
    int *pointer; // pointer variable declaration

    int *pnt1;
    pnt1 = &var2;

    int *pnt2;
    pnt2 = &pnt1;

    printf("The address of the pointer variable pnt2 is: %x\n", &pnt2); // taking address of the pointer variable
    printf("The value of the pointer variable pnt2 is: %x\n", pnt2); // taking address of the pointer variable
    printf("The value of the actual variable by address in pnt2 is: %x\n\n", *pnt2); // taking address of the pointer variable

    // * - read the variable value by pointer address
    // & - take the address of the actual variable and store it in the pointer variable as address

    printf("The address of the var2 variable is: %x\n", pnt1);
    printf("The value of the var2 is: %d\n", *pnt1);
    printf("The address of the pointer variable pnt is: %x\n", &pnt1); // taking address of the pointer variable
    printf("The value of the pointer variable pnt is: %x\n\n", pnt1); // taking address of the pointer variable

    pointer = &var1; // taking address of the var variable and storing it in pointer variable

    printf("var variable address: %x\n", pointer);
    printf("taking the actual value of the variable using pointer: %d\n", *pointer);

    return 0;
}
