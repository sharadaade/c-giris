#include<stdio.h>
void main()
{
    int a[3][3], b[3][3],c[3][3],i,j;
    printf("Enter the element in first matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the element in second matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }  
    }
    printf("Substract two matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d ",c[i][j]);  
        }
        printf("\n");  
    }
}