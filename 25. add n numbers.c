#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,i,value;
    printf("Enter a int num:");
    scanf("%d",&n);
    printf("Enter %d values to add\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&value);
        sum=sum+value;
    }
    printf("Sum is %d",sum);
}
