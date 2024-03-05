#include<stdio.h>
#include<conio.h>
int main()
{
	// Dynamic addition of two number
	int a, b;
	int add, sub, multi, div, rem;
	printf("Enter first num :");
	scanf("%d",&a);
	printf("Enter second num :");
	scanf("%d",&b);
	
	// Addition
	add =  a + b;
	printf("Addition => %d + %d = %d \n",a,b,add);
	
	// Substraction
	sub =  a - b;
	printf("Substraction => %d - %d = %d \n",a,b,sub);
	
	// Multiplication
	multi =  a * b;
	printf("Multiplication => %d * %d = %d \n",a,b,multi);
	
	// Division
	div =  a / b;
	printf("Division => %d / %d = %d \n",a,b,div);
	
	// Remainder or modulos
	rem =  a % b;
	printf("Remainder => %d \% %d = %d \n",a,b,rem);
}
