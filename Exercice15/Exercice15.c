//Write a function called PrintMean() receiving three decimal values as inputand prints on the screen the mean of the three arguments.No
//values is returned.

#include <stdio.h>

void PrintMean(float value01, float value02, float value03);
int main()
{
	float num01 = 0.0f;
	float num02 = 0.0f;
	float num03 = 0.0f;

	printf("Introduce first decimal number: ");
	scanf_s("%f", &num01);

	printf("Introduce first decimal number: ");
	scanf_s("%f", &num02);

	printf("Introduce first decimal number: ");
	scanf_s("%f", &num03);

	 PrintMean(num01, num02, num03);


	return 0;
}


void PrintMean(float value01, float value02, float value03)
{
	printf("(%2.2f + %2.2f + %2.2f)/3 = %2.2f\n", value01, value02, value03, (value01 + value02 + value03) / 3.0f);
}