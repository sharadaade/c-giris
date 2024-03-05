#include <stdio.h>
void main()
{
    // Error in this program when we insert the 7 searching element  
    int a[10], l, r, mid, len, skey, i, flag = 0;
    printf("\nEnter the element in array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nDisplay : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    len = sizeof(a) / sizeof(a[0]);
    mid = l + (r - 1) / 2;
    printf("\nEnter search key : ");
    scanf("%d", &skey);

    l = 0;
    r = (len - 1);
    while (l < r)
    {
        if (a[mid] == skey)
        {
            flag = 1;
            break;

            if (a[mid] < skey)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }

    if (flag)
        printf("Element found");
    else
        printf("Element NOT found");
}