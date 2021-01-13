#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the nth num:");
    scanf("%d",&n);
    do
    {
        printf("%d\n",n);
        n--;
    }while(n>=1);
    printf("Done");
}
