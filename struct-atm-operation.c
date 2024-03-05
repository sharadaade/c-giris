#include<stdio.h>
#include<string.h>

struct customer{
        long long int acno, balance;
        char MyName[20];
        int cardno[12], pin;
    };

    struct customer c;

void Input()
{
    int i;

    printf("\nEnter name : ");
    gets(c.MyName);
    _flushall();
    printf("\nEnter Ac. No. : ");
    scanf("%lld",&c.acno);
    printf("\nEnter Balance : ");
    scanf("%lld",&c.balance);
    printf("\nEnter PIN : ");
    scanf("%lld",&c.pin);
    printf("\nEnter Card No. : ");
    for(i = 0; i < 12; i++ )
    {
        scanf("%d",&c.cardno[i]);
    }
}

void Display()
{
    int i;
    printf("\nDisplay customer data :");
    printf("\nname : %s",c.MyName);
    printf("\nAc. No. : %lld",c.acno);
    printf("\nBalance : %lld",c.balance);
    printf("\nPIN : %d",c.pin);
    printf("\nCard No. :");
    for(i = 0; i < 12; i++)
    {
        printf("%d",c.cardno[i]);
    }
}
void main()
{
    Input();
    Display();

}