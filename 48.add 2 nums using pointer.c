#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,*a,*b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    a=&num1;
    b=&num2;
    sum=*a+*b;
    printf("Sum of two nos: %d",sum);
}
