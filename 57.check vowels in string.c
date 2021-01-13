#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int count=0,i=0;
    printf("Enter a string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
        i++;
    }
    if(count==0)
        printf("There is no vowel in the string");
    else
        printf("There is a vowel in the string and the number of vowels in the string is %d",count);

}
