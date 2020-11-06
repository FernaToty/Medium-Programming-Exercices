//07. Write a program that asks for 2 numbers to the user and show product by sums. Use while loop.

#include <stdio.h>

int main()
{
	int number01 = 0;
	int number02 = 0;
	int product = 0;

	printf("Introduce one number: ");
	scanf_s("%i", &number01);

	printf("Introduce one number: ");
	scanf_s("%i", &number02);

	printf("%i * %i\n", number01, number02);

	while (number02 > 0)
	{
		product += number01;
		number02--;

		if (number02 == 0) printf("%i", number01);
		else printf("%i + ", number01);

	}
	printf(" = %i\n", product);

	return 0;
}