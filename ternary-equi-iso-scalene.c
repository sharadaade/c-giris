#include<stdio.h>
int main(void)
{
    int a1, a2, a3;
    
    printf("Enter first angle :");
    scanf("%d",&a1);
    printf("Enter second angle :");
    scanf("%d",&a2);
    printf("Enter third angle :");
    scanf("%d",&a3);

    a1 == a2 && a1 == a3 ? printf("Equilateral") : a1 == a2 || a2 == a3 || a3 == a1 ? printf("Isoscale") : printf("Scalene");


}