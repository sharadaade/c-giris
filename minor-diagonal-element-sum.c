#include<stdio.h>
void main()
{
    int a[3][3], i, j;

    printf("Enter the element in matrix : ");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Dispaly the matrix :\n");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j == 2-i)
            {
                sum = sum + a[i][j]; 
            }
        }
    }

    printf("Addition of minor diagonal element : %d",sum);
}