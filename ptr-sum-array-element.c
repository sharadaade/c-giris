#include<stdio.h>
void main()
{
    int a[5], i, *ptr, sum = 0;
    ptr = a;

    printf("Enter the element in array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",ptr+i);
    }
    
    // ptr = &a[0];

    printf("display");
    for (i = 0; i < 5; i++)
    {
        printf("\n%d",*(ptr+i));
        sum = a[i];
        sum += *(ptr+i);
    }
    

    
    printf("\n Sum => %d",sum);
    // printf("\n%u",&a[2]);

    

}