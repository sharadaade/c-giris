#include<stdio.h>
void main()
{
    int a[3][3],i,j,usum=0,lsum=0;

    printf("Enter the element in matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           if(i<=j){
                usum+=a[i][j];
           }
           if(i>=j){
                lsum+=a[i][j];
           }
        }
    }
    printf("\nAddition of upper matrix sum : %d",usum);
    printf("\nAddition of lower matrix sum : %d",lsum);
}