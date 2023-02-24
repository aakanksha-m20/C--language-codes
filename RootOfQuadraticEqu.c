#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,discriminant,root1,root2;

    printf("\nEnter coefficients of a,b,c :");
    scanf("%f %f %f",&a,&b,&c);

    discriminant = b*b - 4*a*c;

    // condition for real and different roots
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are: %.2f and %.2f",root1,root2); 
    }
    // condition for real and equal roots
    else if(discriminant == 0)
    {
        root1 = root2 = - b / (2*a);
        printf("Roots are: %.2f and %.2f",root1,root2);
    }
    // if roots are not real
    else
    { 
        float realpart = - b / (2*a);
        float imaginarypart = sqrt(-discriminant) / (2*a);
        printf("Roots are: %.2f + %.2fi and %.2f - %.2fi",realpart,imaginarypart,realpart,imaginarypart);  
    }

    return 0;
}