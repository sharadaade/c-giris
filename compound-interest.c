#include<stdio.h>
#include<math.h>

int main(void)
{
    float Cp, principle, rate, time;
    printf("Enter principle balance :");
    scanf("%f",&principle);
    printf("Enter rate :");
    scanf("%f",&rate);
    printf("Enter time:");
    scanf("%f",&time);

    //logic
    Cp = principle * (pow(( 1 + rate / 100), time));

    printf("Compound interest is %f",Cp);
}