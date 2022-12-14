//Function of substraction

#include<stdio.h>

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

int main()
{
  int a,b,ret;
  
  printf("Enter value of a and b:");
  scanf("%d%d",&a,&b);
  
  ret = Substraction(a,b);
  
  printf("Substraction of a and b is: %d\n",ret);
  
  return 0;
}