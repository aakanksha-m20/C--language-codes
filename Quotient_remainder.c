//C Program to Compute Quotient and Remainder

#include<stdio.h>

int main()
{
    int Divident,Divisor,Quotient,Remainder;

    printf("Enter divident:\n");
    scanf("%d",&Divident);

    printf("Enter divisor:\n");
    scanf("%d",&Divisor);

    Quotient = Divident / Divisor;

    Remainder = Divident % Divisor;

    printf("Quotient = %d\n Remainder = %d\n",Quotient,Remainder);

    return 0;
}