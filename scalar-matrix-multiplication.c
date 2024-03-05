#include<stdio.h>
void main()
{
    int a[3][3], b[3][3],i,j,n;
    printf("Enter the element in first matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter scalar number : ");
    scanf("%d",&n);

    printf("Adding two matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            b[i][j] = n*(a[i][j]);
            printf("%d ",b[i][j]);  
        }
        printf("\n");  
    }
}