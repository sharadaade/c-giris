#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],i,j,flag = 0;
    printf("Enter element in first matrix : ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter element in second matrix : ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i = 0; i < 2;i++)
    {
        for(j = 0; j < 2;j++)
        {
            if(a[i][j] != b[i][j])
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag)
    {
        printf("Matrix is not equal");
    }
    else{
        printf("Both matrix is equal");
    }
}