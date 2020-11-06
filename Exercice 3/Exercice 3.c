//03. Write a program that asks for 3 numbers to the user and determinate the greater one. Take care of side posibilities (equal numbers).

#include <stdio.h>

int main()
{

	int number01 = 0;
	int number02 = 0;
	int number03 = 0;

	printf("Enter first number: ");
	scanf_s("%i", &number01);

	printf("Enter second number: ");
	scanf_s("%i", &number02);

	printf("Enter the third number: ");
	scanf_s("%i", &number03);

	if (((number01 == number02) || (number01 == number03) || (number02 == number03)))
	{
		printf("Two or more numbers are equal. Type 3 different numbers.\n");
	}
	if ((number01 >= number02) && (number01 >= number03))
	{
		printf("Number 1 (%i) is the biggest number.\n", number01);
	}
	if ((number02 >= number01) && (number02 >= number03))
	{
		printf("Number 2 (%i) is the biggest number.\n", number02);
	}
	if ((number03 >= number01) && (number03 >= number02))
	{
		printf("Number 3 (%i) is the biggest number.\n", number03);
	}

	getchar();

	return 0;
}