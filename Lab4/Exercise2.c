/*Laboratory Session 4 - Exercise 2: Weed Killing (40%)
Write a program that reads the dimensions of a rectangular field expressed in meters: length and width as well as the quantity of week killer required to treat the field expressed in liters/square feet. 
Knowing that 1 meter = 3.28 feet, compute and display how many liters of weed killer are required. Provide nice messages. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float length, width, quantity;
	printf("Welcome to Weed Killer...\n");

	printf("Please enter the length of the field in meters:\n");
	scanf("%f", &length);
	printf("Please enter the width of the field in meters:\n");
	scanf("%f", &width);
	printf("Please enter the amount of weed killer required for a square foot of land:\n");
	scanf("%f", &quantity);

	float area = (length*3.28*width*3.28);
	float totalLitres = (area*quantity);

	printf("Total litres required: %.2fL\n", totalLitres);
	printf("Goodbye from Weed Killer...\n");

	return 0;
}
