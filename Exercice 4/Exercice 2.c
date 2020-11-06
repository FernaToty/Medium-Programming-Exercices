//04. Write a program that asks for a month numberand shows the number of daysand name of the month.

#include <stdio.h>

int main()
{
	int month = 0;
	
	printf("Type in a month number (1-12): ");
	scanf_s("%i", &month);

	if (month == 2)
	{
		printf("Provided month has 28 days (29 during a leap year)\n");
	}

	if (((month % 2 == 0) && (month != 2) || (month == 8 || 10 || 12)))
	{
		printf("Provided month has 30 days");
	}

	if ((month % 2 != 0) || (month == 9))
	{
		printf("Provided month has 31 days");
	}

	getchar();

	return 0;
}
