/******************************************************************************

							Online C Compiler.
				Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int square(int firstvar)
{
	int temp = firstvar * firstvar;
	printf("The square of %d is %d \n", firstvar, temp);
	return temp;
}

int getCount(int val)
{
	int count = 0;
	while (val > 0)
	{
		count++;
		val /= 10;
	}
	return count;;
}

int factorial(int firstvar)
{
	int temp = 1;
	for (int idx = firstvar; idx != 0; idx--)
	{
		temp = temp * idx;
	}
	printf("The factorial of %d is %d \n", firstvar, temp);
	return temp;
}

int check()
{
	printf("Enter a number between 3 and 9: ");
	int tempvar;
	while (1)
	{
		scanf(" %d", &tempvar);
		if (tempvar > 2 && tempvar < 10)
			return tempvar;
		else
		{
			printf("Number is note between 3 and 9 try again: ");
		}

	}

}





void get()
{
	int firstvar = check();
	//int secondvar = check();
	int tempvar1 = square(firstvar);
	int tempvar2 = factorial(firstvar);

	if (tempvar1 > tempvar2)
		printf("Yes! Factorial is less than square!");
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
