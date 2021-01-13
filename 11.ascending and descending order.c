#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d\n %d\n %d", &num1,&num2,&num3);
    if((num1>=num2)&&(num1>=num3))
    {
        if(num2>=num3)
        {
            printf("The ascending order is %d %d %d\n",num3, num2,num1);
            printf("The descending order is %d %d %d",num1,num2,num3);
        }
        else
        {
            printf("The ascending order is %d %d %d\n",num2, num3,num1);
            printf("The descending order is %d %d %d",num1,num3,num2);
        }
    }
    if((num2>=num1)&&(num2>=num3))
    {
        if(num1>=num3)
        {
            printf("The ascending order is %d %d %d\n",num3,num1,num2);
            printf("The descending order is %d %d %d",num2,num1,num3);
        }
        else
        {
            printf("The ascending order is %d %d %d\n",num1,num3,num2);
            printf("The descending order is %d %d %d",num2,num3,num1);
        }
    }
    if((num3>=num1)&&(num3>=num2))
    {
        if(num1>=num2)
        {
            printf("The ascending order is %d %d %d\n",num2,num1,num3);
            printf("The descending order is %d %d %d", num3,num1,num2);
        }
        else
        {
            printf("The ascending order is %d %d %d\n",num1,num2,num3);
            printf("The descending order is %d %d %d", num3,num2,num1);
        }
    }
}
