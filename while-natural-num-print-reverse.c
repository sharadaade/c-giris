#include<stdio.h>
int main(void)
{
    int i = 1, n;
    printf("Enter the last number : ");
    scanf("%d",&n);
    while(i <= n)
    {
        printf("%d\n",i);
        i++;
    }
}