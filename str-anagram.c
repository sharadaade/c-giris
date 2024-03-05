#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10], s2[10];
    int flag = 0;
    printf("Enter first string : ");
    gets(s1);

    printf("Enter second string : ");
    gets(s2);

    if(strlen(s1) != strlen(s2))
    {
        flag = 0;
    }
}