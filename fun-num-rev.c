// Rev number with function

#include <stdio.h>
void rev(int);
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    rev(n);
}

void rev(int x)
{
    int r = 0;
    while (x != 0)
    {
        int rem = x % 10;
        r = r * 10 + rem;
        x = x / 10;
    }
    printf("Reverse number is %d",r);
}
