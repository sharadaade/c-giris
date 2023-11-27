// formula 
// resistance = voltage / current
#include<stdio.h>
int main(void)
{
    float resistance, voltge, current;
    printf("Enter voltage :");
    scanf("%f",&voltge);
    printf("Enter current :");
    scanf("%f",&current);

    // logic 
    resistance = voltge / current;

    printf("%f is your Resistance",resistance);

}