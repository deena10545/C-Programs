#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],sum=0,i,n;
   printf("Enter a number of array to add:");
   scanf("%d",&n);
   printf("Enter array numbers to add:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       sum=sum+a[i];
   }
   printf("Sum is: %d",sum);
}
