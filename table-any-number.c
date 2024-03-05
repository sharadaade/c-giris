#include<stdio.h>
int main(void)
{
    int i,n;
    printf("Enter the number : ");
    scanf("%d",&n);

    i = 1;
    while(i<=10)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
}