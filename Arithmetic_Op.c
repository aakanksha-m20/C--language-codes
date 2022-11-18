// Arithmetic operations

#include<stdio.h>

int Addition(int i, int j)
{
  int Sum = 0;
  
  Sum = i + j;
 
  return Sum; 
}

int Substraction(int i, int j)
{
  int Sub = 0;
  
  if(i > j)
  {
    Sub = i - j;
  }
  else
  {
	Sub = j - i;  
  }
 
  return Sub; 
}

int Multiplication(int i, int j)
{
  int Mult = 0;
  
  Mult = i * j;
 
  return Mult; 
}

float Division(float i, float j)
{
  float Div = 0;
  
  Div = i / j;
 
  return Div; 
}

int main()
{
  int a,b;
 
  printf("Enter value of a and b:");
  scanf("%d%d",&a,&b);
  
  int ret1 = Addition(a,b); 
  int ret2= Substraction(a,b); 
  int ret3 = Multiplication(a,b); 
  int ret4 = Division(a,b);
  
  printf("Addition Answer:%d\n",ret1); 
  printf("Substraction Answer:%d\n",ret2); 
  printf("Multiplication Answer:%d\n",ret3); 
  printf("Division Answer:%d\n",ret4);

  return 0;
}
