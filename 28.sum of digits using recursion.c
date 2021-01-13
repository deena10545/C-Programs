#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,res;
    printf("Enter a number:");
    scanf("%d",&n);
    res=add(n);
    printf("sum of digits:%d",res);
}
int add(int n)
{
    if(n!=0)
        return(n%10+add(n/10));
    else
        return 0;
}
