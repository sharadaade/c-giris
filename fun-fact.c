// Factorial
#include <stdio.h>
void fact(int);
int main(void)
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    fact(n);
}

void fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    printf(" %d", f);
}
