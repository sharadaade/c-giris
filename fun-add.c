#include<stdio.h>
void main()
{
    void add(int , int);// Declaration
    int a, b;
    printf("Enter the two number : ");
    scanf("%d %d",&a,&b);
    add(a, b);
}
void add(int a, int b)
{
    printf("Addition is => %d",a+b);
}