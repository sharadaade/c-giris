// Write a program to inpute all basic datatype and print its output
#include<stdio.h>
int main(void)
{
	// NOTE => float and double have same formate specifier
	
	int a =2;
	printf("%d\n",a);

	char ch = 'A';
	printf("%c\n",ch);

	float f = 3.14;
	printf("%f\n",f);

	double d = 2.34647;
	printf("%f\n",d); // %f is also used for double

	long int b = 1234545;
	printf("%ld\n",b);

	long long int lli = 1234243445354;
	printf("%lld\n",lli);

	long double s = 1.12345589985;
	printf("%Lf\n",s);
	
}
