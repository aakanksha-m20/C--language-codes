//Function of Division

#include<stdio.h>

int Division(int i, int j)
{
  int Div = 0;
  
  Div = i / j;
 
  return Div; 
}

int main()
{
  float a,b,ret;
 
  printf("Enter value of a and b:");
  scanf("%f%f",&a,&b);
  
  ret = Division(a,b);
  
  printf("Division of a and b is: %.2f\n",ret);
  
  return 0;
}
 