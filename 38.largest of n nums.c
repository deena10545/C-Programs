#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,num,lar=0;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   printf("The elements are:\n");
   for(i=0;i<n;i++)
   {
       printf("enter number %d:\n",i+1);
       scanf("%d",&num);
       if(num>lar)
       lar=num;
   }
printf("%d is the largest element",lar);
}
