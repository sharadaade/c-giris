// Reverse the number using recursion
#include <stdio.h>
void rev(int);
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    rev(n);
}
int r = 0;
void rev(int x)
{
    if (x != 0)
    {
        int rem = x % 10;
        r = r * 10 + rem;
        x = x / 10;
        rev(x);
        printf("some %d \n",x);
    }
    else
    {
    printf("%d\n ",r);
    }
}