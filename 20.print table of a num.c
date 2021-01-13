#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,res;
    printf("Enter a number to print table of that num:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        res=i*num;
        printf("%d*%d=%d\n", num,i,res);
    }
}
