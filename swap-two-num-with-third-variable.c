#include<stdio.h>
int main(void)
{
    int A, B, C;
    printf("Enter A number:");
    scanf("%d",&A);
    printf("Enter B number:");
    scanf("%d",&B);
    printf("Before swap A=%d B=%d\n",A,B);
    
    C = A;
    A = B;
    B = C;

    printf("After swap A=%d B=%d",A,B);
}