#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g1,g2,gcd,i;
    printf("Enter two integers:\n");
    scanf("%d %d",&g1,&g2);
    printf("%d factors are:\n",g1);
    for(i=1;i<g1&&i<g2;i++)
    {
        if(g1%i==0&&g2%i==0)
            gcd=i;
    }
    printf("GCD = %d",gcd);

}
