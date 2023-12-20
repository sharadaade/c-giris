#include<stdio.h>
int main(void)
{
    int n, result;
    printf("Enter a three digit number :");
    scanf("%d",&n);

    // 123 
    // Logic // 3 * 100=300   // 12   2*10=20    // 1
    result = (n % 10) * 100 + ((n / 10)%10) * 10 + (n/100);
    //result = (n/100); // => print the first number
    printf("%d",result);
}