#include<stdio.h>
void main()
{
    int  a[3][3], i, j, flag = 0;
    
    printf("Enter the element in matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}