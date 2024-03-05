#include<stdio.h>
void main()
{
    float area(float); // declaration
    float r, result;
    printf("Enter the number : ");
    scanf("%f",&r);

    result = area(r);
    printf("Area is %f",result);

}

float area(float r)
{
    return r*r*3.14f;
}