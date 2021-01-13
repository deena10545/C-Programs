#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num,expo,i,res=1;
  printf("Enter a base number:");
  scanf("%d",&num);
  printf("Enter a exponent number:");
  scanf("%d",&expo);
  for(i=0;i<expo;i++)
  {
      res=res*num;
  }
  printf("Answer:%d",res);
}
