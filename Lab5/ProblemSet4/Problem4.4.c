/*Laboratory Session 5 - Problem Set No. 4 - Problem 4.4
Write a program to read in any date in format: day, month, year. 
The day must be from 1 to 31, month from 1 to 12 and year must be a number from AD 1800 onwards. 
Determine whether the year is a leap year and print appropriate messages. 
If year is before 1800 or greater than 9999, print "out of range" message. 
A leap year is defined as a centenary year divisible by 400 or a non-centenary year divisible by 4. 
Check if the day number corresponds to the maximum number accepted in that month, that year (E.g. 28 or 29 in February, 30 in November, etc.), otherwise print an error message.*/

#include <stdio.h>
#include <stddef.h>
#include <string.h>

int convert(char* input) //method that converts string to int
{
	int i, len;
	int result = 0;
	len = strlen(input);   

	for(i=0; i<len; i++){
		result = result * 10 + (input[i] - '0' );
	}
	return(result);
}

int main()
{

	char date[10]; //date array
	char split[] = "/,-"; //delimiters
	char *copy, *day, *month, *year;//char pointers
	int valid_date = 0;//integer boolean set to 0 or 'FALSE'
	int day_num, month_num, year_num;//declare variables outside while
	int maxDays;//for testing lenght of months
	int leap;//for checking if leap year

	printf("Welcome to Problem 4.4... \n");
	while (valid_date == 0)//while loop checking for valid date
	{      
		printf("Enter the date in the format: dd/mm/yyyy: \n");
		scanf("%s", date);//take in string

		copy = strdup(date);//creates a copy
		day = strsep (&copy, split);//takes in the first token
		month = strsep (&copy, split);//takes in the second token
		year = strsep (&copy, split);//takes in the third token

		day_num = convert(day);//converts first token to int
		month_num = convert(month);//converts second token to int
		year_num = convert(year);//converts third token to int
		
		if (year_num % 400 == 0){ //checks if century and leap year
			leap = 1;
		}
		else if(year_num % 4 == 0){//checks if year is leap year
			leap = 1;
			if(year_num % 100 == 0){//makes sure year is not divisble by 4 and 100
				leap = 0;
			}
		}else leap = 0;//not leap year
		
		valid_date = 1;//sets valid date to true
		
		if(month_num == 2){//checks if february
			maxDays = 28;
			if(leap) maxDays = 29;//if february and leap year
		}
		else if(month_num == 4 || month_num == 6 || month_num == 9 || month_num == 11){
			maxDays = 30;//checks if month has 30 days
		}
		else maxDays = 31;//otherwise month is 31 days

		if (day_num < 1 || day_num > maxDays){//checks that day is valid
			printf("Error, day must be a number between 1 and %d \n", maxDays);
			valid_date = 0;
		}
		if (month_num < 1 || month_num > 12){//checks that month is valid
			printf("Error, month must be a number between 1 and 12 \n");
			valid_date = 0;
		}
		if (year_num < 1800 || year_num > 9999){//checks that year is valid
			printf("Error, year must be a number between 1800 and 9999 \n");
			valid_date = 0;
		}
	}

	
	
	if(leap == 1){//prints leap year after checks
		printf("%s/%s/%s is on a leap year.\n", day, month, year);
	}
	else{//otherwise printts not leap year
		printf("%s/%s/%s is NOT on a leap year.\n", day, month, year);
	}
	
	printf("Goodbye from Problem 4.4... \n");

	return(0);
}
