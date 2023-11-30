#include<stdio.h>

int main()
{
    char ch;
    printf("Enter The Value:\n");
    scanf("%c",&ch);

    // Note ==> In char input we can take number(int) input also

    ch>='A' && ch<='Z' || ch>='a' && ch<='z' ? printf("Value Is Alphabet"):ch>='0' && ch<='9'?printf("Value Is Digit"):printf("Value Is Special Symbol");
    return 0;
}