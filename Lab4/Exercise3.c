/*Laboratory Session 4 - Exercise 3: Sum and Average Calculation (40%)
Write a program that reads from the keyboard three numbers, computes and displays their sum, their product and their average as well as the minimum and the maximum value of the three numbers. Use “if” statement only. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1, num2, num3, sum, product, average;
	printf("Welcome to Sum and Average Calculator..: \n");
	printf("Please enter the first number: \n");
	scanf("%f", &num1);
	printf("Please enter the second number: \n");
	scanf("%f", &num2);
	printf("Please enter the third number: \n");
	scanf("%f", &num3);

	sum = num1+num2+num3;
	printf("The sum is: %.2f \n", sum);

	product = num1*num2*num3;
	printf("The product is: %.2f \n", product);

	average = sum/3;
	printf("The average is: %.2f \n", average);

	if((num1 >= num2) && (num1 >= num3)){
		printf("Max number is: %.2f\n", num1);
	}
	else if((num2 >= num1) && (num2 >= num3)){
		printf("Max number is: %.2f\n", num2);
	}
	else if((num3 >= num1) && (num3 >= num2)){
		printf("Max number is: %.2f\n", num3);
	}
	if((num1 <= num2) && (num1 <= num3)){
		printf("Min number is: %.2f\n", num1);
	}
	else if((num2 <= num1) && (num2 <= num3)){
		printf("Min number is: %.2f\n", num2);
	}
	else if((num3 <= num1) && (num3 <= num2)){
		printf("Min number is: %.2f\n", num3);
	}
	printf("Goodbye from Sum and Average Calculator..: \n");

		return 0;
}
