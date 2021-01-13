#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,i,gcd,lcm;
   printf("Enter two numbers to find HCF and LCM:");
   scanf("%d %d",&num1,&num2);
   for(i=1;i<num1&&i<num2;i++)
   {
       if(num1%i==0&&num2%i==0)
            gcd=i;
   }
   lcm=(num1*num2)/gcd;
   printf("The lcm and gcd of the numbers %d & %d are: %d & %d", num1,num2,lcm,gcd);

}
