//Write a function called IsNegative() receiving an integer as input parameterand returning 1 if the input value is negative or 0 if it is not.

#include <stdio.h>

int isNegative();

int main()
{
	int num01 = 0;
	
	printf("Introduce one number: ");
	scanf_s("%i", &num01);
	printf("\n");

	if (isNegative(num01)) printf("Number is negative!\n");
	else printf("Number is positive!\n");



	return 0;
}

int isNegative(int num)
{
	int result = 0;

	if (num < 0) result = 1;

	return result;


}

