#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter the alphabet :");
    scanf("%c",&ch);

    ch>='A' && ch<='Z' ? printf("Uppercase") : printf("Lowercase");
}