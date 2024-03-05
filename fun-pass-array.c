#include<stdio.h>
void main()
{
    void displayArray(int *);
    int a[] = {10, 20, 30, 40, 50};
    displayArray(a);
}
void displayArray(int *ptr)
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",ptr[i]);
    }
}