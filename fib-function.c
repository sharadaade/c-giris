#include<stdio.h>
void fib(int);
int a = 0, b = 1;
void main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("\n %d  %d  ",a,b);
    fib(x);
}
int f;
void fib(int n)
{
    for(int i = 2; i <= n-1; i++)
    {
        f = a + b;
        a = b;
        b = f;
        printf("  %d  ",f);
    }
}