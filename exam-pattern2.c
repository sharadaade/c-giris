#include<stdio.h>
void main()
{
     for (int i = 1; i <= 5; i++)
     {
        for (int j = 5; j>=1; j--)
        {
            if (i>=j)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
     }
     
}