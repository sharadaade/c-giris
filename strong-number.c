#include <stdio.h>
int rem, sum = 0, n, multi = 1;
fact(int n)
{
    for (int i = 1; i <= rem; i++)
    {
        multi = multi * i;
    }
}
void main()
{
    printf("\nEnter the number : ");
    scanf("%d", &n);
    int myNum = n;
    while (n != 0)
    {
        rem = n % 10;
        int f = fact(rem);
        n /= 10;
        sum = sum + f;
    }
    if (sum == myNum)
    {
        printf("Strong number ");
    }
    else
    {
        printf("Not strong number");
    }
}
