#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0)
        printf("%d is positive",num);
    else if (num<0)
        printf("%d is negative",num);
    else
        printf("%d is zero",num);
}
