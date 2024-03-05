#include <stdio.h>
void my(int);
void main()
{
    int no = 5;
    my(no);
}

void my(int x)
{
    if (x != 0)
    {
        printf("\nGood");
        my(x - 1);
    }
    else
    {
        printf("\nend");
    }
}