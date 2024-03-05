#include<stdio.h>
void main()
{
    int a[3][3], i, j, m, n, temp;

    printf("Enter the element in array :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Display matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    printf("Display transpose matrix :\n");

    //m = 3;

    for (i = 0; i < 3; i++)
    {
        for (j = i; j < m/2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][m-j-1];
            a[i][m-j-1] = temp;
        }
        // printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    
}