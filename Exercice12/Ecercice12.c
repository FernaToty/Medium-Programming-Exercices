///12. Write a function to calculate power of a value.Function declaration should be : int RaiseToPower(int value, int power);

#include <stdio.h>

int RaiseToPower(int value, int power);

int main()
{
	int base = 0;
	int power = 0;

	printf("Introduce base number: ");
	scanf_s("%i", &base);
	

	printf("Introduce power: ");
	scanf_s("%i", &power);
	

	printf("\n%i^%i = %i\n", base, power, RaiseToPower(base, power));

	return 0;

	



}

int RaiseToPower(int value, int power)
{
	int result = 1;

	while (power > 0)
	{
		result *= value;
		power--;
	}

	return result;


}


