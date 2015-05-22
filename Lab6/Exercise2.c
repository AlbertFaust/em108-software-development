/*Laboratory Session 4 - Exercise 2: Soccer Tickets (20%)
Write a program that first reads the number of people who bought soccer tickets. 
For each person, it reads the number of tickets bought and prints it in the following table:
CLIENT NO.    NO. TICKETS
  1               2
  2               3
  3               1
  4               4
The program should then compute and print the average numbers of tickets bought by soccer fans.*/
#include<stdio.h>

int main(){
	
	int clients,i;
	float average,total;
	
	printf("Welcome to Soccer Tickets.. \n");
	printf("Please enter the number of people who bought tickets:\n");
	scanf("%d",&clients);
	int tickets[clients];
	for(i=0; i<clients; i++){
		printf("Please enter the number of tickets person %d bought:\n",i+1);
		scanf("%d",&tickets[i]);
		total = total+tickets[i];
	}
	printf("CLIENT NO.\t NO.TICKETS\n");
	for(i=0; i<clients;i++){
		printf("    %d\t\t",i+1);
		printf("      %d\n",tickets[i]);
	}
	average = total/clients;
	printf("The average number of tickets bought is: %.2f\n",average);
	printf("Goodbye from Soccer Tickets..\n");
	
return(0);
}
