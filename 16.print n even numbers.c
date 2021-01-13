#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    printf("Enter the int number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
