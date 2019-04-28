#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define pi 3.14
#define circumference(x) 2*pi*x
#define area(x) x*x*pi


void work()
{
	int tempvar;
	printf("Enter radius in meters: ");
	scanf(" %d", &tempvar);
	printf("Circumference is: %f \n", circumference(tempvar));
	printf("Area is: %f \n", area(tempvar));
}



int main()
{
	char cont = 'y';
	while (cont == 'y' || cont == 'Y')
	{
		work();
		printf("Enter y or Y to continue: ");
		scanf(" %c", &cont);
	}
	return;
}