#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[100];
    int i,len;
    printf("Enter a string:");
    gets(str);
    for(len=0;str[len]!='\0';len++);
    for (i=0;i<len;i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("Converted string from lower to upper:%s",str);
}
