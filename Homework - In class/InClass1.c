

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




void main()
{
	int tempvar;
	int farTemp;
	char tempvar2 = 'y';
	while (1)
	{
		printf("Please enter a temperature in celcius: ");
		scanf("%d", &tempvar);
		farTemp = tempvar * 9 / 5 + 32;
		printf("The temperature in celcius is: %d \nThe temperature in farenheit is: %d \n", tempvar, farTemp);
		printf("Would you like to continue the program? Y for yes, anything else exits: ");
		scanf("%s", &tempvar2);
		if (tempvar2 != 'Y' && tempvar2 != 'y')
			break;


	}
}