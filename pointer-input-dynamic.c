#include<stdio.h>
void main()
{
    int size, *ptr, i;
    printf("Enter the size :");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        printf("Enter the value on %p block :",ptr);
        scanf("%d",ptr);
        ptr++;
    }

    ptr = ptr - size;

    for (i = 1; i <= size; i++)
    {
        printf("%p -------> %d\n",ptr,*ptr);
        ptr++;
    }
    
}