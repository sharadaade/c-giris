#include<stdio.h>


void main()
{
    int a[5], b[5], c[10], i, j, k;
    void megeArray(int [], int []); // declaration

    printf("Enter element in first array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element in second array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }

    megeArray(a,b);
}

void megeArray(int x[], int y[])
{
    int k = 0, i, j, z[10];
    for (i = 0; i < 5; i++)
    {
        z[k] = x[i];
        k++;
    }
    for (j = 0; j < 5; j++)
    {
        z[k] = y[j];
        k++;
    }
    printf("After merging array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",z[i]);
    }
    
}