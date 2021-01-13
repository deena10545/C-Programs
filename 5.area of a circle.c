#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415

int main()
{
    float r,area;
    printf("Enter the radius of a circle:");
    scanf("%f",&r);
    area=(pi*r*r);
    printf("Area of a circle: %f", area);
}
