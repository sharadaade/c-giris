#include<stdio.h>
void main()
{
    int a[3][3], i, j;

    printf("Enter the element in matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Display the matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // logic
    int lsum = 0, rsum = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                lsum = lsum + a[i][j];
            }
            if(j == 2-i)
            {
                rsum = rsum + a[i][j];
            }
        }
    }

    printf("Addition of diagonal element : %d",lsum+rsum);
}