#include<stdio.h>
void main()
{
    int a[5];
    printf("Enter the five number : ");
    int i = 0;
    while(i<5)
    {
        scanf("%d",&a[i]);
        i++;
    }
    printf("Entered number is : ");
    int sum = 0;
    i = 0;
    while (i<5)
    {
        printf("%d ",a[i]);
        sum = sum + a[i];
        i++;
    }
    printf("\nSum of all number : %d",sum);
    
}