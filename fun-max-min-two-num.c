#include<stdio.h>
void main()
{
    int maxMin(int, int); // declaration
    int m, n;
    printf("Enter first number : ");
    scanf("%d",&m);
    printf("Enter second number : ");
    scanf("%d",&n);

    maxMin(m,n);

}

int maxMin(int a, int b)
{
    if(a>b){
        printf("%d is grater",a);
    }else{
        printf("%d is grater",b);
    }
}