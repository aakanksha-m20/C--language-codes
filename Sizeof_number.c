// C Program to Find the Size of int, float, double and char and value given by user

#include<stdio.h>

int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    double No;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));

    //Value given by user
    printf("Enter number: \n");
    scanf("%d",&No);

    printf("Sizeof given number is: %d",sizeof(No));
    
    return 0;
}