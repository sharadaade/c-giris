#include<stdio.h>
void main()
{
    int a[5];
    printf("Enter the five number : ");
    int i = 0;
    while (i<5)
    {
      scanf("%d",&a[i]);
      i++;
    }

    printf("List of number : ");
    i = 0;
    while (i<5)
    {
      printf("%d ",a[i]);
      i++;  
    }
    
    
}