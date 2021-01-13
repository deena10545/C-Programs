#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,r,rev=0;
    printf("Enter a num:");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    printf("The reverse of a num is: %d\n",rev);
}
