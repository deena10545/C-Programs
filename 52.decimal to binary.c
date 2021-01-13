#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,bin_num=0,r,deci_num,base=1;
    printf("Enter the Decimal number:");
    scanf("%d",&n);
    deci_num=n;
    while(n!=0)
    {
        r=n%2;
        bin_num=bin_num+r*base;
        n=n/2;
        base=base*10;
    }
    printf("The binary number of %d is : %d",deci_num,bin_num);
}
