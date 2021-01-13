#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    float sum;
    printf("Enter num1:");
    scanf("%f",&num1);
    printf("Enter num2:");
    scanf("%f",&num2);
    sum=num1+num2;
    printf("Sum of two numbers %.2f",sum);
}
