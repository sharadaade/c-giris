#include<stdio.h>
void main()
{
    int *ptr, i, size;

    printf("Enter the size : ");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        printf("Enter the value on %u block: ");
        scanf("%d",ptr);
        ptr++;
    }

    ptr = ptr - size;

    printf("Value with block address \n");
    for (i = 1; i <= size; i++)
    {
        printf("%u ------> %d\n",ptr,*ptr);
        ptr++;
    }
    

}