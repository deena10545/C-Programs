#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[50],str2[50];
    int i;
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    i=0;
    while(str1[i]==str2[i]&& str1[i]!='\0')
        i++;
    if(str1[i]==str2[i])
        printf("str1 is equal to str2");
    else
        printf("str1 is not equal to str2");
}
