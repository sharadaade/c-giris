#include<stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        int x = 65;
        for (int j = 1; j <=5 ; j++)
        {
            printf("%c",x);
            x++;
        }
        printf("\n");
    }
    
}