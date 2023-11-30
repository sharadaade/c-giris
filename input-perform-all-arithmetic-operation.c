// WAP to take two number and perform all arithmetic operation
#include<stdio.h>
int main(void)
{
	float num1, num2, add, sub, multi, div, rem;
	printf("--CALCULATOR--\n");
	printf("Enter first number :");
	scanf("%f",&num1);
	printf("Enter second number :");
	scanf("%f",&num2);
	
	add = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;
 
	rem = (int)num1 % (int)num2;
	
	printf("Addition is : %f\n",add);
	printf("Substraction is : %f\n",sub);
	printf("Multiplication is : %f\n",multi);
	printf("Division is : %f\n",div);
	printf("Remainder is : %f\n",rem);
	
}
