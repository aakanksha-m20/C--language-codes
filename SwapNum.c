//Swap number using third variable

#include<stdio.h>

int main()
{
 int first,second,temp;
 
 printf("\nEnter first number: ");
 scanf("%d",&first);
 
 printf("\nEnter second number: ");
 scanf("%d",&second);
 
 temp = first;

 first = second;

 second = temp;
 
 printf("\nNumber after swaping : %d\t%d",first,second);
 
 return 0;
} 