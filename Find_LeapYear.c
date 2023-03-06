#include <stdio.h>
int main()
 {
   int year;

   printf("Enter a year: ");
   scanf("%d", &year);

  // leap year if perfectly divisible by 400
   if (year % 400 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   else if (year % 100 == 0)   // but if not divisible by 400 this step runs
   {
      printf("%d is not a leap year.", year);
   }
   // runs this step if not divisible by 100
   else if (year % 4 == 0)     // but leap year divisible by 4
   {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else 
   {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
