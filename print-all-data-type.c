// Write a program to inpute all basic datatype and print its output
#include<stdio.h>
int main(void)
{
	// NOTE => float and double have same formate specifier
	
	int a =2;
	char ch = 'A';
	float f = 3.14;
	double d = 2.34647;
	long int b = 1234545;
	long long int lli = 1234243445354;
	long double s = 1.12345589985;
	
	printf("%d\n",a);
	printf("%c\n",ch);
	printf("%f\n",f);
	printf("%f\n",d); // %f is also used for double
	printf("%ld\n",b);
	printf("%lld\n",lli);
}
