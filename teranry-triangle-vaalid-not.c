#include<stdio.h>
int main(void)
{
    int a, b, c, all;
    printf("Enter first angle :");
    scanf("%d",&a);
    printf("Enter second angle :");
    scanf("%d",&b);
    printf("Enter third angle :");
    scanf("%d",&c);

    all = a + b + c;
    all == 180 ? printf("Triangle is valid") : printf("Triagle is not valid");
}