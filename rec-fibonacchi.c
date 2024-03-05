#include <stdio.h>
void fib(int, int);
int a = 0, b = 1, lim; 
void main()
{
    printf("Enter the limit : ");
    scanf("%d",&lim);
    printf("%d  %d ",a,b);
    fib(a, b);
}

int f = 0, i = 1;
void fib(int x, int y)
{
    if(i <= lim -2)
    {
        f = x + y;
        x = y;
        y = f;
        printf(" %d ",f);
        i++;
        fib(x, y);
    }
}