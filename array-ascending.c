#include<stdio.h>
void main()
{
    int a[5], temp, i;
    printf("Enter the array element : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++) // 5 4 3 2 1
    {
        for (int j = i+1; j < 5; j++)
        {
            if(a[i] > a[j])  //5>4
            {
                temp = a[i];  //temp=5
                a[i] = a[j];  //a[i]=4
                a[j] = temp;  //a[j]=5
            }
        }   
    }
    printf("After sort : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
}