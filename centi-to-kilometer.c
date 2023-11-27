#include<stdio.h>
int main(void)
{
    // Formula
    // km = cm / 100000
    float km, cm;
    printf("Enter a centimeter :");
    scanf("%f",&cm);

    //logic
    km = cm /100000;

    printf("%f km",km);
}