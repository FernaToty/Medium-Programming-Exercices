//10. Write a program that asks for a sequence of numbers to the user and show the mean of all of them. Process stops when number 0 is introduced.

#include <stdio.h>

int main()
{
	int number = 5;
	int sum = 0;
	int counter = 0;

	while (number != 0)
	{
		printf("Introduce numeber %02i: ", (counter + 1));
		scanf_s("%i", &number);

		sum += number;
		if (number != 0) counter++;
	}
	counter--;

	printf("The sum of the %i numbers introduced is: %i\n", counter, sum);
	printf("The mean of the %i numbers introduced is: %2.2f\n", counter, (float)sum/counter);
	
	return 0;

}