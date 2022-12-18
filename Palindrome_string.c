//Palindrome string

#include<stdio.h>
#include<string.h>

int main()
{
  char str1[20];
  int i,length;	
  int flag = 0;
  
  printf("Enter the string: ");
  scanf("%s",&str1);
  
  length = strlen(str1);
  
  for(i = 0;i < length;i++)
  {
	  if(str1[i] != str1[length-i-1])
	  {
	    flag = 1;
		break;
	  }
  }
  
  if(flag)
  {
	  printf("%s is not a palindrome\n",str1);
  }
  else
  {
    printf("%s is a palindrome\n",str1);
  }  
  
  return 0;
}
