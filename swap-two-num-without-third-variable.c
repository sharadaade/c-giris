#include<stdio.h>
int main(void)
{
    int A,B;
    printf("Enter A number :");
    scanf("%d",&A);
    printf("Enter B number :");
    scanf("%d",&B);
    printf("Before swap A=%d B=%d\n",A,B);
    
    // A = 10 B = 20
    A = A + B; // A = 30
    B = A - B; // B = 
    A = A - B;

    printf("After swap A=%d B=%d",A,B);
}