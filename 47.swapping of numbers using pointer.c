#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,*a,*b,temp;
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping:\nnum1=%d num2=%d\n",num1,num2);
    a=&num1;
    b=&num2;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping:\n num1=%d num2=%d",num1,num2);

}
