//02. Write a program that asks for 2 numbers to the user and determinate the greater one. Take care of side posibilities (equal numbers).

#include <stdio.h>

int main()
{

	int number = 0;

	printf("Introduce one number: ");
	scanf_s("%i", &number);

	if ((number % 2)) != 1
	
		printf("The number is even!\n");

	
	else
	
		printf("The number is odd!\n");
	
	return 0;
}