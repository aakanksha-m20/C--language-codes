// Arithmetic operations

#include<stdio.h>
#include<stdlib.h>

int a,b ;

void Accept()
{	
	printf("\nEnter the 1st number:");
    scanf("%d",&a);
    printf("\nEnter the 2nd number:");
    scanf("%d",&b);
}

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
  int Opt;
  
  do
  {
	printf("\n-------------------------------------------");
    printf("\nMenu-driven program for the arithmetic operations");
    printf("\n-------------------------------------------");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
    printf("\n-------------------------------------------");
    printf("\nEnter your choice:");
    scanf("%d",&Opt);
	
	switch(Opt)
	{
      case 1:   	
		    
		    Accept();
			  printf("\nAddition of %d+%d = %d",a,b,Addition(a,b));
        break;
		   
      case 2:   	
		    
		    Accept();
			  printf("\nSubstraction of %d-%d = %d",a,b,Substraction(a,b));
        break;
		
      case 3:   	
		    
     	  Accept();
			  printf("\nMultiplication of %d*%d = %d",a,b,Multiplication(a,b));
        break;
	  
      case 4:   	
		    
			  Accept();
			  printf("\nDivision of %d/%d = %f",a,b,Division(a,b));
        break;
		
      case 5:   	
		  
        exit(0);
	
    	default :
          
        printf("\nWrong choice entered... Please try again\n");		
	}
  }while(Opt != 5);	 

  return 0;
}