//02. Write a program that asks for 2 numbers to the user and determinate the greater one. Take care of side posibilities (equal numbers).

#include <stdio.h>

int main()
{

	int number01 = 0;
	int number02 = 0;

	printf("Enter first number: ");
	scanf_s("%i", &number01);

	printf("Enter second number: ");
	scanf_s("%i", &number02);

	if (number01 > number02)

		printf("Number 1 is bigger than 2!\n");

	if (number01 == number02)

		printf("Number 1 and 2 are equals!\n");

	if (number01 < number02)

		printf("Number 2 is bigger than 1!\n");

	return 0;

}