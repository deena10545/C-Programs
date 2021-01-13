#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,binary_num,r,deci_num=0,base=1;
    printf("Enter the binary numbers(0's and 1's):");
    scanf("%d",&n);
    binary_num=n;
    while(n!=0)
    {
        r=n%10;
        deci_num=deci_num+r*base;
        n=n/10;
        base=base*2;
    }
    printf("The decimal number of %d is : %d",binary_num,deci_num);
}
