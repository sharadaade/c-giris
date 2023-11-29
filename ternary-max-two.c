#include<stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);

    num1 > num2 ? printf("%d is maximun",num1) : printf("%d is maximum",num2);

}