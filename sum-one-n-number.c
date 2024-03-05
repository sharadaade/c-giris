#include<stdio.h>
void main()
{
    int i, n, sum = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    i = 0;
    while(i<=n)
    {
        sum += i;
        i++;
    }
    printf("%d",sum);
}