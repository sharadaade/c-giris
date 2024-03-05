#include<stdio.h>
void main()
{
    int a[10], skey, len, i;
    printf("Enter element in sorted formate : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEntered elemeent in array : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    len = sizeof(a)/sizeof(a[0]);
}