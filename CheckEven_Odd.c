//C Program to Check Whether a Number is Even or Odd

#include<stdio.h>

int main()
{
    int No;

    printf("\nEnter number: ");
    scanf("%d",&No);

    if(No % 2 == 0)
    {
       printf("%d is even number.",No);
    }
    else
    {
       printf("%d is odd number.",No);
    }
    

    return 0;
}