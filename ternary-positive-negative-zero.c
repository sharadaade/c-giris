#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    num > 0 ? printf("Positive") : num < 0  ? printf("Negative") : printf("Zero");
}