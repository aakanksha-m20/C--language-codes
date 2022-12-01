//C Program to Multiply Two Floating-Point Numbers

#include<stdio.h>

int main()
{
   double a,b,multi;

   printf("Enter to floating-point number:");
   scanf("\n%lf\t%lf",&a,&b);

   multi = a * b;

   printf("Multiplication of two number is: %.2lf",multi);

   return 0;

}