
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void sum(int firstvar, int secondvar)
{
    int temp = firstvar + secondvar;
    printf("The sum of %d and %d is %d \n",firstvar, secondvar, temp);
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

void product(int firstvar, int secondvar)
{
    int temp = firstvar * secondvar;
    printf("The product of %d and %d is %d \n",firstvar, secondvar, temp);
	printf("%d has %d digits.\n", temp, getCount(temp));
}

int check()
{
    printf("Enter a positive number: ");
    int tempvar;
    while(1)
    {
        scanf(" %d",&tempvar);
        if(tempvar > 0)
            return tempvar;
        else
        {
            printf("Number is not positive, please enter a positive number: ");
        }
        
    }

}





void get()
{
		int firstvar = check();
		int secondvar = check();
		sum(firstvar, secondvar);
		product(firstvar, secondvar);
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
