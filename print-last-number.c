#include<stdio.h>
int main(void)
{
    int num ,rem;
    printf("Enter number :");
    scanf("%d",&num);
    rem = num % 10;
    printf("The last number is %d",rem);
}