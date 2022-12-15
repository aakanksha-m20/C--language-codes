//Sum of digits

/*Step 1: Get number by user
Step 2: Get the modulus/remainder of the number
Step 3: sum the remainder of the number
Step 4: Divide the number by 10
Step 5: Repeat the step 2 while number is greater than 0.
*/

#include<stdio.h>

int main()
{
  int i,n,m,Sum=0;
  
  printf("Enter number:");
  scanf("\n%d",&n);
  
  while(n > 0)
  {
    m = n % 10;
	Sum = Sum + m;
	n = n / 10;
  }
  
  printf("Sum of digit is:%d",Sum);
  
  return 0;
}