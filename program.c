#include<stdio.h>
#include<conio.h>
int main()
{
	// Area of circle 
	//--------------------------------------------------------------------
//	float pi = 3.14, r, area;
//	printf("Enter a number :");
//	scanf("%f",&r);
//	area = pi * r * r;
//
//	printf("area of circle is : %f",area);

	// --------------------------------------------------------------------
	//WAP to input the number even or odd with ternary operator
//	int num;
//	printf("Enter a number :");
//	scanf("%d",&num);
//	num%2==0 ? printf("Even") : printf("Odd"); 


	// --------------------------------------------------------------------
	/*
	WAP to input the selling price and cost price of item and 
	check seller made profit or loss ?
	*/ 
	
//	int sp , cp;
//	printf("Enter the selling price :");
//	scanf("%d",&sp);
//	printf("Enter the cost price :");
//	scanf("%d",&cp);
//
//	sp > cp ? printf("Profit") : printf("Loss");


	// Q. 
	
	long int bs, da, hra, totalSalary;
	printf("Please Enter your salary :");
	scanf("%ld",&bs);
	
	// logic 
	da = (30 * bs)/ 100;
	hra = (30 * bs)/ 100;
	
	totalSalary = bs + da + hra;
	
	printf("Your total salary is %ld with da plus hra",totalSalary);
	return 0;

}
