#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    num % 5 == 0 || num % 11 == 0 ? printf("Divisible by 5 and 11") : printf("NOT Divisible by 5 and 11");
}