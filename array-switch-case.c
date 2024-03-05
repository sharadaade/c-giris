#include<stdio.h>
void main()
{
    int a[5], b[5], i, j, value;

    printf("Enter the element in array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Display the array element : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ",a[i]);
    }

    
    printf("\n\n1.Sort in ascending order :");
    printf("\n2.Sort in decending order :");
    printf("\n3.sum of digit at same index :");
    printf("\n4.Store even first and odd at last :");
    printf("\n5.Store only prime num at that index :");

    printf("\n\nEnter the operation number : ");
    scanf("%d",&value);
    
    switch(value)
    {
        case 1:

            for (i = 4; i >= 0; i--)
            {
                printf("%d ",a[i]);
            }
            
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;

        default:
            printf("Incorrect input");
    }

}