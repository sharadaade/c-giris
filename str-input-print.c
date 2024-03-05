#include<stdio.h>
void main()
{
    char c[20], i;
    printf("Enter name : ");
    gets(c);
    printf("Display name : ");
    
    // for (i = 0; c[i] != '\0'; i++)
    // {
    //     printf("%c",c[i]);
    // }

    printf("%s",c);
    
}