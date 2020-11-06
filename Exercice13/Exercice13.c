//13. Write a function called IsEven() receiving an integer as input parameter and returning 1 if the input values is even or 0 if it is not.

#include <stdio.h>

int isEven(int num);

int main()
{
	int number = 0;
	
	printf("Introduce one number: ");
	scanf_s("%i", &number);

	if (isEven(number) == 1) printf("Number is even!");
	else (printf("Number is odd!"));
	
	return 0;
}

int isEven(int num)
{
	int result = 0;

	if (num % 2 == 0) result = 1;
	else result = 0;

	return result;
}
