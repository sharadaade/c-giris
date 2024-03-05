#include<stdio.h>
int main(void)
{

    float resistance, voltge, current;
    printf("Enter voltage :");
    scanf("%f",&voltge);
    printf("Enter resistancet :");
    scanf("%f",&resistance);

    // logic 
    current = voltge / resistance ;

    printf("%f is your Resistance",current);

}