#include<stdio.h>
void main()
{
    int a[6], i, j, p, InsNum;
    printf("Enter the five element : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nDisplay array element : ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the position : ");
    scanf("%d",&p);
    printf("\nEnter the Inserted number : ");
    scanf("%d",&InsNum);

    for (i = 5-1; i >= p-1; i--)
    {
        a[i+1] = a[i];
    }
    a[p-1] = InsNum;

    printf("\nArray after inserting element : ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ",a[i]);
    }
    
}