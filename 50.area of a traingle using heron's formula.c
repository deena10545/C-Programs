#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{

    float a,b,c,s,area;
    printf("Enter the length of three sides of a triangle:");
    scanf("%f %f %f", &a,&b,&c);
    s=(a+b+c)/2;
    printf("Semi Perimeter of triangle is %.2f\n",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle:%.2f",area);
}
