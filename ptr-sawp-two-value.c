#include<stdio.h>
void main()
{
    int a, b, temp;
    int  *ptr1, *ptr2;

    printf("Enter two value : ");
    scanf("%d %d",&a,&b);

    ptr1 = &a;
    ptr2 = &b;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("%d\t%d",a,b);
    
    
}