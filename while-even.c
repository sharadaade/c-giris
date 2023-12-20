#include<stdio.h>
int main(void)
{
    int i=0, n;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}