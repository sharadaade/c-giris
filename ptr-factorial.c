#include<stdio.h>
void main()
{
    int n, *ptr, i;
    printf("Enter the Number : ");
    scanf("%d",&n);

    ptr = &n;
    *ptr = 1;

    for(i=1; i<=n;i++)
    {
        *ptr = *ptr * i;
    }

    printf("%d",*ptr);
}