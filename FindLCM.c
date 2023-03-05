#include<stdio.h>

int main()
{
    int i,n1,n2,LMC;
    int gcd = 1;

    printf("Enter n1 & n2: ");
    scanf("%d %d",&n1,&n2);

    for(i = 1; i <= n1 && i <= n2; i++)
    {
        if(i % n1 == 0 && i % n2 == 0)
        {
            gcd = i;
        }
    }

    LMC = (n1 * n2) / gcd;

    printf("%d is LMC of %d and %d.",LMC,n1,n2);

    return 0;
}
