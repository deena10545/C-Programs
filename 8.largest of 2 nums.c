#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &num1,&num2);
    if(num1>=num2)
    {
         printf("The largest number is: %d", num1);
    }
    else
    {
        printf("The largest number is: %d", num2);
    }

}
