#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    printf("Enter the element in matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]); 
        }    
    }

    int sum = 0;
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(j>=i)
            {
                sum = sum + a[i][j];
            }
        } 
    }
    printf(" sum = %d",sum);   
}