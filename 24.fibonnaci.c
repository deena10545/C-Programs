#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s1=0,s2=1,temp;
    printf("Enter a num:");
    scanf("%d",&n);
    printf("Fibonnaci sequence: \n%d\n%d\n",s1,s2);
    temp=s1+s2;
    while(temp<=n)
    {
        printf("%d\n",temp);
        s1=s2;
        s2=temp;
        temp=s1+s2;
    }
}
