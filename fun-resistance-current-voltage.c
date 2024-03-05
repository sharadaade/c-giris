#include<stdio.h>
void main()
{
    void res(float, float);
    void cur(float, float);
    void vol(float, float);

    float r, i, v;
    int ch;
    printf("1.Resistance\n2.Current\n3.Voltage\n");
    printf("\nEnter choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter i and v : ");
        scanf("%f%f",&i,&v);
        res(i, v);
        break;

    case 2:
        printf("Enter r and v : ");
        scanf("%f%f",&r,&v);
        res(r, v);
        break;
    
    case 3:
        printf("Enter r and i : ");
        scanf("%f%f",&r,&i);
        res(r, i);
        break;
    
    default:
        printf("Wrong choice!!");
        break;
    }
}

void res(float v, float i)
{
    printf("\nResistance %f",v/i);
}

void cur(float r, float v)
{
    printf("\nCurrent %f",v/r);

}

void vol(float i, float r)
{
    printf("\nVoltage %f",r/i);
}