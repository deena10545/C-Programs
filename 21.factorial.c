#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,fact=1;
   printf("Enter a num:");
   scanf("%d",&num);
   while(num!=0)
   {
       fact=fact*num;
       num--;
   }
   printf("The factorial of number is %d", fact);
}
