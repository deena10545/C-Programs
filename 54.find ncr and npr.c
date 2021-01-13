#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,i=1,perma,sub,combi;
    long long int fact=1,num,deno;
    printf("Enter the value of n and r:");
    scanf("%d %d",&n,&r);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    num=fact;
    sub=n-r;
    fact=1;
    i=1;
    while(i<=sub)
    {
        fact=fact*i;
        i++;
    }
    deno=fact;
    perma=num/deno;
    printf("Permutation=%d\n",perma);
    fact=1;
    i=1;
    while(i<=r)
    {
        fact=fact*i;
        i++;
    }
    combi=perma/fact;
    printf("Combination=%d",combi);
}
