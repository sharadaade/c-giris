#include<stdio.h>
void main()
{
    void add(int, int);
    void sub(int, int);
    void multi(int, int);
    void div(int, int);

    int  a, b, c;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);

    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");

    printf("\nEnter your choice : ");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
            add(a,b);
            break;
        case 2:
            sub(a,b);
            break;
        case 3:
            multi(a,b);
            break;
        case 4:
            div(a,b);
            break;
        default:
            printf("wrong choice ");
    }
}

void add(int a, int b)
{
    printf("Addition is %d",a+b);
}

void sub(int a, int b)
{
    printf("Substraction is %d",a-b);
}

void multi(int a, int b)
{
    printf("Multiplication is %d",a*b);
}

void div(int a, int b)
{
    printf("Division is %d",a/b);
}