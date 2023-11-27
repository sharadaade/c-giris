// formula 
// fah = (cel * 9 / 5) + 32
#include<stdio.h>
int main(void)
{
    float cel, fah;
    printf("Enter the temperature in celsious :");
    scanf("%f",&cel);

    //logic 
    fah = (cel * 9 / 5) + 32;

    printf("%f is a temperature in Farenhed",fah);
}