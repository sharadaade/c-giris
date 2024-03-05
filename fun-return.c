// function square
#include <stdio.h>
int getSq(int);
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int r = getSq(n);
    printf("%d", r);
}

int getSq(int x)
{
    return x * x;
}
