// Find the largest number among three numbers

#include<stdio.h>

int main()
{
  int n1,n2,n3;
  
  printf("Enter 3 different values:");
  scanf("%d %d %d",&n1,&n2,&n3);
  
  if(n1 >= n2 && n1 >= n3)
  {
    printf("%d is largest number\n",n1);
  }
  else if(n2 >= n1 && n2 >= n3)
  {
    printf("%d is largest number\n",n2);
  }
  else if(n3 >= n1 && n3 >= n2)
  {
    printf("%d is largest number\n",n3);
  }
  
  return 0;
}