#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,squ,r,sum=0;
    printf("Enter a number to check whether it is neon number or not:");
    scanf("%d",&n);
    squ=n*n;
    while(squ!=0)
    {
        r=squ%10;
        sum=sum+r;
        squ/=10;
    }
    if(n==sum)
        printf("%d is neon number",n);
    else
        printf("%d is not neon number",n);
}
