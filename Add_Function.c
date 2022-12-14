//Function of addition

#include<stdio.h>

int Addition(int i, int j)
{
  int Sum = 0;
  
  Sum = i + j;
 
  return Sum; 
}

int main()
{
  int a,b,ret;
 
  printf("Enter value of a and b:");
  scanf("%d%d",&a,&b);
  
  ret = Addition(a,b);
  
  printf("Addition of a and b is: %d\n",ret);
  
  return 0;
}