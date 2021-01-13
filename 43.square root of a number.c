#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    float res;
    printf("Enter a number:");
    scanf("%d",&n);
    res=sqrt(n);
    printf("Square root of %d is %.3f",n,res);

}
