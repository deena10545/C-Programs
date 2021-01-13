#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,rem,temp;
    printf("Enter a three digit num to check whether it is armstrong num or not:");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num/=10;
    }
    if(temp==sum)
        printf("%d is the armstrong number",temp);
    else
        printf("%d is not the armstrong number",temp);
}
