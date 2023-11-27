// WAP input radius and show diameter, area, circumference
#include<stdio.h>
int main(void)
{
    float radius, diameter, area, circumference;
        printf("Enter the radius :");
        scanf("%f",&radius);

            diameter =  2 * radius;
            area = 3.14 * radius * radius;
            circumference = 3.14 * 2 * radius;

        printf("diameter is %f\n",diameter);
        printf("area is %f\n",area);
        printf("circumference is %f\n",circumference);

}