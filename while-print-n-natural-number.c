#include<stdio.h>
void main()
{
    int n, i;
    printf("Enter the number : ");
    scanf("%d",&n);

    i = 1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}