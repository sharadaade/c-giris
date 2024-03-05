#include<stdio.h>
void main()
{
    int a[5], skey, flag = 0;
    printf("Enter the number : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnterd element in array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter searching element : ");
    scanf("%d",&skey);
    
    for (int i = 0; i < 5; i++)
    {
        if (a[i]==skey)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("Element found");
    }else{
        printf("Element NOT found");
    }
      
}