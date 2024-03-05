#include<stdio.h>
void main()
{
    int *p1, *p2, a, b, *temp;

    printf("Enter first Number in A : ");
    scanf("%d",&a);

    printf("Enter second Number in B : ");
    scanf("%d",&b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    p1 = *p2;
    p2 = *temp;

    printf("Value in A => %d",*p1);
    printf("Value in B => %d",*p2);
}