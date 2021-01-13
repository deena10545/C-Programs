#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num1,num2;
 printf("Enter two numbers:\n");
 scanf("%d %d",&num1,&num2);
 num1=num1+num2;
 num2=num1-num2;
 num1=num1-num2;
 printf("After swapping: the two nos. are\n %d %d",num1,num2);
}
