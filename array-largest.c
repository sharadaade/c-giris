#include<stdio.h>
void main()
{
    int a[5], max;
    printf("Enter the element : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
        
    }
    printf("largest element is %d",max);

}