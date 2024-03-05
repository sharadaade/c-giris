// formula 
//cel = (fah - 32) * 5 / 9

#include<stdio.h>
int main(void)
{
   float cel, fah;
   printf("Enter the temperatute in farenhed : ");
   scanf("%f",&fah);
   
   // logic
    cel = (fah - 32) * 5 / 9;

   printf("%f is the temperature in Celsius",cel); 

}