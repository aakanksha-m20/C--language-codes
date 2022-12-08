//C Program to Check Whether a Character is a Vowel or Consonant

#include<stdio.h>

int main()
{
   char C;
   char Lowercase_Vowel,Uppercase_Vowel;

   printf("\nEnter character: ");
   scanf("%c",&C);

   Lowercase_Vowel = (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u');

   Uppercase_Vowel = (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U'); 
   
   if(Lowercase_Vowel || Uppercase_Vowel)
   {
      printf("%c is vowel.\n",C);
   }
   else
   {
      printf("%c is consonant.\n",C);
   }

   return 0;
}