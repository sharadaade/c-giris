#include<stdio.h>
#include<math.h>
void main()
{
    int num, rem, count = 0;
    printf("Enter Number : ");
    scanf("%d",&num);

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        count++;
    }
    printf("Count is %d",count);
    
}