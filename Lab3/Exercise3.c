/*Laboratory Session 3 - Exercise 3: Exchange Office (40%)
Write a program that reads the exchange rates between EURO and US DOLLAR and BRITISH POUND respectively. 
Print the following table for EURO values from 1 to 10. 
Ask the user to input an amount in EURO and express his interest in exchanging it in either USD or GBP. 
Convert the amount in the right currency and print the value on the screen. 
Provide nice welcome and goodbye messages.

			EURO 	USD 	GBP
			1		1.293	0.693
			2		2.586	1.386
			...						
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int euro = 1;
	float euroamount;
	float usd, gbp;
	char conversion[3];

	printf("Welcome to Exchange Office... \n");
	printf("Enter value of 1 Euro in USD\n");
	scanf("%f",&usd);
	printf("Enter value of 1 Euro in GBP\n");
	scanf("%f",&gbp);

	printf("EURO\tUSD\tGBP\n");
	for(euro; euro < 11; euro++){
		printf("%d\t%.3f\t%.3f\n", euro, usd*euro, gbp*euro);
	}
	
	printf("How much euro do you want to convert?\n");
	scanf("%f",&euroamount);

	printf("Do you wish to convert to USD or GBP?\n");
	scanf("%s",conversion);

	if(strcmp("USD",conversion)==0||strcmp("usd",conversion)==0)
		printf("This amount of Euro in USD is: %.2f\n", euroamount*usd);
	else if(strcmp("GBP",conversion)==0||strcmp("gbp",conversion)==0)
		printf("This amount of Euro in GBP is: %.2f\n", euroamount*gbp);
	else
		printf("Invalid\n");

	printf("Goodbye from Exchange Office... \n");

	return(0);
}
