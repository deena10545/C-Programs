#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,i;
   printf("Enter a number to print factors of that num:");
   scanf("%d",&num);
   printf("factors of %d:\n",num);
   for(i=1;i<=num;i++)
   {
       if(num%i==0)
       {
           printf("%d\n",i);
       }

   }
}
