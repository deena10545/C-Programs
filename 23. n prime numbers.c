#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=3,c,j;
    printf("Enter, how many prime numbers want to print:");
    scanf("%d",&n);
    if(n>=1)
    {
        printf(" First %d prime numbers are:\n",n);
        printf("2\n");
    }
    for(c=2;c<=n;)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            printf("%d\n",i);
            c++;
        }
        i++;

    }
}
