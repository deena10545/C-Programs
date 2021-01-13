#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum=0;
    printf("Enter a number to check for perfect number:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num)
        printf("%d is a perfect number",num);
    else
        printf(" %d is not a perfect number",num);
}
