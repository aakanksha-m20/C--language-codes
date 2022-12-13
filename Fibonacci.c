/*Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.*/

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