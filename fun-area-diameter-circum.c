#include<stdio.h>
void main()
{
    void final(float);
    float r;
    printf("\nEnter the radius : ");
    scanf("%f",&r);

    final(r);
    
}

void final(float r)
{
    printf("\nArea is %f",3.14*r*r);
    printf("\nDiametr is %f",2*r);
    printf("\nCircumference is %f",2*3.14*r);
}