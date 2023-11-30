#include<stdio.h>
int main(void)
{
    char num;
    printf("Enter the alphabet :");
    scanf("%c",&num);

    num == 'a' || num == 'e' || num == 'i' || num == 'o' || num == 'u' || num == 'A' || num == 'E' || num == 'I' || num == 'O' || num == 'U' ? printf("vowel") : printf("consonant");
}