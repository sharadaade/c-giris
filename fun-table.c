#include<stdio.h>
void main()
{
    void table(int); // declaration

    int no;
    printf("Enter the number : ");
    scanf("%d",&no);

    table(no);

}

void table(int x)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ",x*i);
    }
}