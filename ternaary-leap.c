#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year :");
    scanf("%d",&year);
    year % 4 == 0 ? printf("Year is leap") : printf("Year is not leap");
}