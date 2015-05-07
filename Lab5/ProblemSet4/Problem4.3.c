/*Laboratory Session 5 - Problem Set No. 4 - Problem 4.3
Write a program to read in three integers (1-100) and sort them in descending order. 
The program should print the values in descending order with appropriate messages. 
Repeat the problem while the user wants to.*/

#include <stdio.h>
int main()
{
	float num[3];
	int i,j;

	printf("Welcome to Problem 4.3... \n");
	int validDigits = 0;
	while(validDigits==0){
		for(i = 0; i < 3; i++){
			printf("Please enter digit number %d: ", i+1);
			scanf("%f",&num[i]);
		}
		int num1Val = 0, num2Val = 0, num3Val = 0;
		if((num[0] <= 100) && (num[0] >= 1))
			num1Val = 1;
		if((num[1] <= 100) && (num[1] >= 1))
			num2Val = 1;
		if((num[2] <= 100) && (num[2] >= 1))
			num3Val = 1;
	
		if(num1Val && num2Val && num3Val){
		validDigits = 1;
			if((num[0] > num[1]) && (num[0] > num[2]) ){
				printf("%.2f\n", num[0]);
				if(num[1] > num[2]){
					printf("%.2f\n", num[1]);
					printf("%.2f\n", num[2]);
				}
				else{
					printf("%.2f\n", num[2]);
					printf("%.2f\n", num[1]);
				}
			}
			else if((num[1] > num[0]) && (num[1] > num[2])){
				printf("%.2f\n", num[1]);
				if(num[0] > num[2]){
					printf("%.2f\n", num[0]);
					printf("%.2f\n", num[2]);
				}
				else{
					printf("%.2f\n", num[2]);
					printf("%.2f\n", num[0]);
				}
			}
			else if((num[2] > num[0]) && (num[2] > num[1])){
				printf("%.2f\n", num[2]);
				if(num[0] > num[1]){
					printf("%.2f\n", num[0]);
					printf("%.2f\n", num[1]);
				}
				else{
					printf("%.2f\n", num[1]);
					printf("%.2f\n", num[0]);
				}
			}
		}
		else{ 
			printf("Error, please enter number between 1 and 100\n");
			validDigits = 0;
		}
	}
	
	printf("Goodbye from Problem 4.3... \n");

	return(0);
}
