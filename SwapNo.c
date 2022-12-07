//Swap number without using third variable

#include<stdio.h>

int main()
{
 int a,b;
 
 printf("\nEnter first number: ");
 scanf("%d",&a);
 
 printf("\nEnter second number: ");
 scanf("%d",&b);
 
 a = a - b;
 b = a + b;
 a = b - a;
 
 printf("\nNumber after swaping :%d\t%d",a,b);
 
 return 0;
} 