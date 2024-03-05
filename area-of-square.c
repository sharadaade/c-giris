#include<stdio.h>
int main(void)
{
	float area, side;
	printf("-- Find the area of sqare --\n");
	printf("Enter the side of square :");
	scanf("%f",&side);
	
	area = side * side;
	
	printf("Area of square is %f",area);
	
}
