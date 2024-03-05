#include<stdio.h>
int main(void)
{
    int n, rem, count = 0;
    printf("Enter the  number : ");
    scanf("%d",&n);

    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        ++count;
    }
    printf("there are %d digit in number",count);
}