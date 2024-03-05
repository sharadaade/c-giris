#include<stdio.h>
void main()
{
    int i, a[5], b[5], k = 0,index;
    printf("Enter the element of array :\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered the element in array => ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the index of element : ");
    scanf("%d",&index);

    for (i = index; i < 5 ; i++)
    {
        b[k] = a[i];
        k++;
    }
    
    for ( i = 0; i < index; i++)
    {
        b[k] = a[i];
        k++;
    }
    printf("\nAfter rotate : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ",b[i]);
    }
    
}