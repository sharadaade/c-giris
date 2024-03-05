#include<stdio.h>
void main()
{
    int a[5], min;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Min is : %d",min);
}