#include<stdio.h>
void main()
{
    int a[5];
    printf("Enter the number : ");
    int i = 0;
    while (i<5)
    {
        scanf("%d",&a[i]);
        i++;
    }
    printf("Even : ");
    i = 0;
    while (i<5)
    {
        if(a[i]%2== 0){
            printf("%d ",a[i]);
        }
        i++;
    }
    
    printf("\nOdd : ");
    i = 0;
    while (i<5)
    {
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
        i++;  
    }
    
}