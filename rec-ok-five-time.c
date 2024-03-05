#include<stdio.h>
void my(int);
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d,&n");
    my(n);
}

void my(int x)
{
    if(x!=0) 
    {
        printf("Sharad"); // x x x x x
        x--;
        my(x);
    }
}