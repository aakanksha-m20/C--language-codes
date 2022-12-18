//Function of multiplication

#include<stdio.h>

int Multiplication(int i, int j)
{
  int Mult = 0;
  
  Mult = i * j;
 
  return Mult; 
}

int main()
{
  int a,b,ret;
 
  printf("Enter value of a and b:");
  scanf("%d%d",&a,&b);
  
  ret = Multiplication(a,b);
  
  printf("Multiplication of a and b is: %d\n",ret);
  
  return 0;
}