#include<stdio.h>
#include<conio.h>

int main()
{
	float r, result;
	float pi = 3.14;
	
	printf("Enter the radius of circle : ");
	scanf("%f",&r);
	
	result = pi * r * r;
	
	printf("Area of circle is %f",result);
}
