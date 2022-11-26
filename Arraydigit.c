//TO find missing nummber from given range.

#include <stdio.h>
#include<stdlib.h>

#define MAX 10

int bubble(int arr[MAX], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[MAX];
    int n;

    printf("enter the value of n : ");
    scanf("%d", &n);

    printf("enter values : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble(arr,n);

    for(int j = 0; j < n; j++)
    {
       if(j == arr[j])
       {
         continue;
       }
       else 
       {
          printf("Missing number = %d\n",j);
          break;
       }
    }
    
    return 0;
}
