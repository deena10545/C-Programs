#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a,b,c,discriminant,root1,root2,img_part,real_part;
    printf("Enter the coefficients a,b and c:");
    scanf("%f %f %f", &a,&b,&c);
    discriminant=((b*b)-(4*a*c));
    if(discriminant>0)
    {
        printf("The roots are real and different");
        root1= (-b + sqrt(discriminant)/(2*a));
        root2= (-b - sqrt(discriminant)/(2*a));
        printf("Root1 is %f\n Root2 is %f", root1,root2);
    }
    else if (discriminant<0)
    {
        printf("The roots are complex and different");
        real_part= -b/(2*a);
        img_part= sqrt(-discriminant)/(2*a);
        printf("Root1 is %.2f+%.2fi\n Root2 is %.2f-%.2fi",real_part,img_part,real_part,img_part);
    }
    else
    {
        printf("The roots are real and equal");
        root1=root2=-b/(2*a);
        printf("Root1=Root2=%.2f",root1);
    }
}
