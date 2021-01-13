#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float sum=0,value;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&value);
        sum=sum+value;
    }
    printf("Average of %d numbers is %.2f", n,(sum/n));
}
