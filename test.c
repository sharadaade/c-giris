#include<stdio.h>
#include<conio.h>
int main()
{
	int bs, da, hra, totalSalary;
	printf("Please Enter your salary :");
	scanf("%d",&bs);
	
	// logic 
	da = (30 * bs)/ 100;
	hra = (30 * bs)/ 100;
	
	totalSalary = bs + da + hra;
	
	printf("Your total salary is %d with da plus hra",totalSalary);
	return 0;
}