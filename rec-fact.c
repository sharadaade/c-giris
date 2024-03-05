#include <stdio.h>
void fact(int);
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    fact(n);
}
int f = 1;
void fact(int x)
{
    if (x != 0)
    {
        f = f * x;
        fact(--x);
    }
    else
    {
        printf("%d", f);
    }
}