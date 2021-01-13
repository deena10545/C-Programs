#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,j,num2,sum1=0,sum2=0,i;
    printf("Enter the num1 & num2:");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<num1;i++)
    {
        if(num1%i==0)
            sum1=sum1+i;
    }
    for(j=1;j<num2;j++)
    {
        if(num2%j==0)
            sum2=sum2+j;
    }
    if(num1==sum2&&num2==sum1)
        printf("%d and %d are amicable numbers",num1,num2);
    else
        printf("%d and %d are not amicable numbers",num1,num2);

}
