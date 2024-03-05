#include <stdio.h>
void main()
{
    int lim, temp, flag, rem, i;
    printf("Enter the limit : ");
    scanf("%d", &lim);
    for (i = 1; i <= lim; i++)
    {
        temp = i;
        flag = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            temp /= 10;

            if (rem == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", temp);
        }
    }
}
