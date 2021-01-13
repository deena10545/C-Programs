#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,i=3,sum=0,j,count=0;
    printf("Enter, how many prime numbers you want to print:");
    scanf("%d",&n);
    if(n>=1)
    {
        printf("The first %d prime numbers are:\n",n);
        printf("2\n");
    }
    for(c=2;c<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            printf("%d\n",i);
            sum=sum+i;
            c++;
        }
    }
    printf("\nSum of first %d prime numbers are: %d",n,sum+2);
}
