/*Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.*/

#include<stdio.h>

int main()
{
	int n,r,sum=0,temp;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	temp = n;
	
	while(n > 0)
	{
		r = n % 10;
		sum = sum +(r*r*r);
		n = n / 10;
	}
	
	if(temp == sum)
	{
		printf("\n%d is a armstrong number.",temp);
	} 	
	else
	{
		printf("\n%d is not a armstrong number.",temp);
	}
}