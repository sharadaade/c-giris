#include<stdio.h>
void main()
{
    void convert(float);
    float meter;
    printf("Enter the meter : ");
    scanf("%f",&meter);

    convert(meter);

}
void convert(float meter)
{
    printf("\nIn kilometer %f",meter/1000);
}