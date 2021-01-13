#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,square,sum=0,value;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        sum=sum+value;
   }
   square=sum*sum;
        printf("The sum is %d and the Square of %d is %d",sum,sum,square);
}

