#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char c[10];
    int i;

    printf("Enter the string : ");
    gets(c); //SHARAD

    char s[10];
    for(i = 0; c[i] != '\0'; i++)
    {
        c[i] = tolower(c[i]);
    }

    printf("%s",c);
    
}