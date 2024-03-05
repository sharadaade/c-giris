#include<stdio.h>
void main()
{
    int a, b, *ptr1, *ptr2, div;

    printf("Enter two value : ");
    scanf("%d %d",&a,&b);

    ptr1 = &a;    
    ptr2 = &b;

    div = *ptr1 / *ptr2;
    printf("Addition --> %d\n",*ptr1+*ptr2);
    printf("Multiplication --> %d\n",*ptr1**ptr2);
    printf("Substraction--> %d\n",*ptr1-*ptr2);
    printf("Remainder--> %d\n",*ptr1%*ptr2);
    printf("Division--> %d",div); 
}