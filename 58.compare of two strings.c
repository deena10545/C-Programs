#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[50],str2[50];
    int res;
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    res=strcmp(str1,str2);
    if(res==0)
        printf("strings are same");
    else
        printf("strings are not same");
}
