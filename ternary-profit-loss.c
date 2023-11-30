#include<stdio.h>
int main(void)
{
    float cp, sp;
    printf("Enter the cost price :");
    scanf("%f",&cp);
    printf("Enter the selling price :");
    scanf("%f",&sp);

    sp > cp ? printf("Profit") : printf("Loss");

}