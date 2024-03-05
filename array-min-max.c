#include<stdio.h>
void main()
{
    int a[5],max, min;
    printf("Enter the element of array : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element of array => ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if (a[i]< min)
        {
           min = a[i];
        }
    }
    printf("\nMaximum is : %d\n",max);
    printf("Minimum is : %d\n",min);
}