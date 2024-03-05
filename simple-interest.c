#include<stdio.h>
int main(void)
{
    float simple_interest, principle, pow, rate, time;
    printf("Enter principle :");
    scanf("%f",&principle);
    printf("Enter pow :");
    scanf("%f",&pow);
    printf("Enter rate :");
    scanf("%f",&rate);
    printf("Enter time (In year) :");
    scanf("%f",&time);

    //logic
    simple_interest = (principle * time * rate) / 100;
    printf("Simple interest is %f",simple_interest);
}