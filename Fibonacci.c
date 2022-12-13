// The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence are 0 followed by 1.

#include<stdio.h>

int main()
{
  int t1 = 0,t2 = 1;
  int n, i;
  
  printf("Enter number of terms to print: ");
  scanf("%d",&n);
  
  int NextTerm = t1 + t2;
  
  printf("Fibonacci series: %d\t%d\t",t1,t2);
  
  for(i = 3; i <= n; i++)
  {
    printf("%d\t",NextTerm);
	
	t1 = t2;
	t2 = NextTerm;
	NextTerm = t1 + t2;
  }
  return 0;
}