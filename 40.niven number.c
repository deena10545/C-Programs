#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,sum=0,r;
    printf("Enter a number to check whether it is niven number or not:");
    scanf("%d",&t);
    n=t;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    if(t%sum==0)
        printf("niven number");
    else
        printf("not a niven number");
}
