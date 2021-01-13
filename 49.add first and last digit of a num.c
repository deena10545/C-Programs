#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,first,last,sum;
    printf("Enter any number to add first and last digit:");
    scanf("%d",&n);
    first=n;
    last=n%10;
    while(n>=10)
    {
        n/=10;
    }
    first=n;
    sum=first+last;
    printf("sum of last and first digit: %d",sum);


}
