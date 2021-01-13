#include <stdio.h>
#include <stdlib.h>

int main()
{
    int roll_no,s1,s2,s3,total;
    float average;
    printf("Enter your roll number:");
    scanf("%d",&roll_no);
    printf("Enter the marks of three subjects");
    scanf("%d %d %d",&s1,&s2,&s3);
    total=s1+s2+s3;
    average= total/3;
    printf("The total is %d\nThe average is %f", total,average);
    if(average>=80)
        printf("\nyour grade is 'A'");
    else if (average>=50)
        printf("\nyour grade is 'B'");
    else
        printf("\nYour grade is 'C'");

}
