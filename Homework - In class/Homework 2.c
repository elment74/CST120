

// Tung Duong

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


void brackets(float temp)
{
	if (temp >= 90.0f)
		printf("Exellent! \n");
	else if (temp < 90.0f && temp >= 80.0f)
		printf("Bad! \n");
	else if (temp < 80.0f && temp >= 70.0f)
		printf("Catastrophe! \n");
	else if (temp < 70.0f && temp >= 60.0f)
		printf("Death! \n");
	else
		printf("F \n");

}


void getPercentage(int first, int second)
{
	float f = (float)first;
	float s = (float)second;
	float temp = 100 * f / s;
	printf("Grade is: %.6f \n", round(temp));
	brackets(round(temp));
}


int check(int numif)
{
	if(numif == 1)
		printf("Enter a positive integer for students test score: ");
	else if(numif == 2)
		printf("Enter a positive integer for total possible test score: ");
	int tempvar;
	while (1)
	{
		scanf(" %d", &tempvar);
		if (tempvar > 0)
			return tempvar;
		else
		{
			printf("Number is not positive, please enter a positive number: ");
		}

	}

}


void get()
{
	int firstvar = check(1);
	int secondvar = check(2);
	getPercentage(firstvar, secondvar);
}



int main()
{
	char cont = 'y';
	while (cont == 'y' || cont == 'Y')
	{
		get();
		printf("Enter y or Y to continue: ");
		scanf(" %c", &cont);
	}
	return;
}