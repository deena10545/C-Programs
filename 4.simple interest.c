#include <stdio.h>
#include <stdlib.h>

int main()
{
    float SI,principal,rate,time;
    printf("Enter the principal,rate and time for SIMPLE INTEREST:\n");
    scanf("%f\n%f\n%f",&principal,&rate,&time);
    SI=(principal*rate*time)/100;
    printf("The simple interest is: %f", SI);
}
