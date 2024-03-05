#include<stdio.h>
// #include<math.h>
void main()
{
    int cube(int); // declaration
    int n, result;
    printf("Enter the number : ");
    scanf("%d",&n);

    result = cube(n);
    printf("cube is %d",result);

}
int cube(int n)
{
    //pow(n,3);
    return n*n*n;
}
