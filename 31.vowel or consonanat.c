#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c,lowercase,uppercase;
    printf("Enter an alphabet:");
    scanf("%c",&c);
    lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(!isalpha(c))
            printf("Error, not an alphabet");
    else if(lowercase||uppercase)
        printf("%c is a vowel",c);
    else
        printf("%c is not a vowel",c);
}

