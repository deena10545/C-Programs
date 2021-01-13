#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,r,sum=0;
    printf("Enter a number to find sum of digits:");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num/=10;
    }
    printf("Sum of digits is: %d",sum);
}
