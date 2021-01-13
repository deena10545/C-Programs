#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,temp;
    printf("Enter the num1 & num2:");
    scanf("%d\n%d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping the values of num1 & num2 : %d %d", num1,num2);

}
