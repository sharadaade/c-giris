#include<stdio.h>
int main(void)
{

    float resistance, voltge, current;
    printf("Enter current :");
    scanf("%f",&current);
    printf("Enter resistancet :");
    scanf("%f",&resistance);

    // logic 
    voltge = current * resistance ;

    printf("%f is your Resistance",voltge);

}