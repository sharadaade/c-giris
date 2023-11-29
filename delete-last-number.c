#include<stdio.h>
int main(void)
{
    int num, quotiont;
    printf("Enter a number :");
    scanf("%d",&num);
    // If you want to delete last number from the input number the divide the input number by 10
    // logic
    quotiont = num / 10;
    
    printf("After deleting last number %d",quotiont);
}