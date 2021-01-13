#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a number to print sum of even numbers:");
    scanf("%d",&n);
    printf("Even numbers upto %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("\nSum of even numbers: %d",sum);
}
