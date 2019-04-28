#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


void work(char tempvar[])
{
	int length = strlen(tempvar);
	for (int idx = 0; idx < length; idx++)
	{
		if (tempvar[idx] != tempvar[length - idx - 1])
		{
			printf("not a palindrome \n");
			return;
		}
	}
	printf("It is a palindrome \n");
}



int main()
{
	char cont = 'y';
	while (cont == 'y' || cont == 'Y')
	{
		char tempvar[10];
		printf("Please enter a palindrome up to 10: ");
		scanf("%s", &tempvar);
		work(tempvar);
		printf("Enter y or Y to continue: ");
		scanf(" %c", &cont);
	}
	return;
}