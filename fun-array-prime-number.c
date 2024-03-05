#include<stdio.h>
void main()
{
    void prime(int []); // declaration
    int a[10], i;
    printf("Enter element in array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    prime(a);
}

void prime(int x[])
{
    int i, len, flag = 0;
    len = sizeof(x) / sizeof(x[0]);
    for (i = 0; i < len ; i++)
    {
        if (x[i] == 0 || x[i] == 1)
        {
            flag = 0;
        }

        if (x[i]%i==0)
        {
            flag = 1;
        }
        
    }

    if (flag)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
    
}