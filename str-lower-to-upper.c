#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char c[10];
    printf("Enter the string : ");
    gets(c);
    
    int i;

    for(i = 0; c[i] != '\0'; i++)
    {
        c[i] = toupper(c[i]);
    }

    printf("%s",c);


    // Printing string with for loop
    // for (i = 0; c[i] != '\0'; i++)
    // {
    //     printf("%c",c[i]);
    // }
    
}