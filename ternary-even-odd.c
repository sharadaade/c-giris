#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    // Logic
    num % 2 == 0 ? printf("Even") : printf("Odd");
}