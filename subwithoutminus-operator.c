#include<stdio.h>
#include<conio.h>

//Subtract two numbers without using arithmetic operators

int main()
{
	int a = 20, b = 15, c;
	c = a + (~b + 1); // ~b + 1 => -15
	printf("%d",c);
}
