#include<stdio.h>
void main()
{
    int  a[10], i, j, skey, flag = 0;

    printf("Enter the element in array : ");
    for(i=0; i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nDisplay : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the searching element : ");
    scanf("%d",&skey);

    for(i = 0; i < 10; i++)
    {
        if(skey == a[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("Element found");
    else
        printf("Element NOT found");
}