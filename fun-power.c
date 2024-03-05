#include <stdio.h>
#include <conio.h>
void power(int, int); // function declaration
void main()
{
    int a, b;
    printf("Enter the base and index : ");
    scanf("%d %d", &a, &b);
    power(a, b); // functin calling
}

void power(int base, int index)
{
    int p = 1;

    for (int i = 1; i <= index; i++)
    {
        p = p * base;
    }

    printf("Power is %d", p);
}