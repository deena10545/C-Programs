#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,flag=0,i;
    printf("Enter a positive integer to check prime number or not:\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            flag=1;
    }
    if(num==1)
        printf("1 is either prime or composite");
    else if(flag==0)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number", num);
}
