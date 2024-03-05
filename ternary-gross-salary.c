#include<stdio.h>
int main(void)
{
    int Bsal, Gsal;
    printf("Enter the basic salary of employee :");
    scanf("%d",&Bsal);

    Gsal = Bsal>= 0 && Bsal <= 10000 ? Bsal + (Bsal * 20.0 / 100)+ (Bsal * 80.0/100) : 
        Bsal >= 10000 && Bsal <= 20000 ? Bsal + (Bsal * 25.5 / 100) + (Bsal * 90.0/100) :
            Bsal + (Bsal * 30.0 / 100) + (Bsal * 95.0 / 100);
    
    printf("Gross salary is %d",Gsal);
}