#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,n;
    printf("Enter the nth number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        ++i;
    }
    printf("Printed from 1 to nth number");
}
