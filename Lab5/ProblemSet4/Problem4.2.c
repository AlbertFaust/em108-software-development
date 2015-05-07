/*Laboratory Session 5 - Problem Set No. 4 - Problem 4.2
Write a program to read in the sides of a triangle (l,m,n) and determine if it is a right angled triangle or not. 
If it is a right-angled triangle, then Pythagorus's theorem will hold for it. 
The program should display an appropriate message. 
Ask the user if s/he does not want to check another triangle and while so, repeat the procedure.*/

#include <stdio.h>
int main()
{
	float num[3];
	int i,j;
	float hyp,adj,opp;

	printf("Welcome to Problem 4.2... \n");
		for(i = 0; i < 3; i++){
			printf("Please enter side number %d: \n", i+1);
			scanf("%f",&num[i]);
		}
			if((num[0] > num[1]) && (num[0] > num[2])){
				hyp = num[0];
				adj = num[1];
				opp = num[2];
			}
			else if ((num[1] > num[0]) && (num[1] > num[2])){
				hyp = num[1];
				adj = num[0];
				opp = num[2];
			}
			else {hyp = num[2];
				 adj = num[0];
				 opp = num[1];}
		
		if((hyp*hyp) == (adj*adj)+(opp*opp))
			printf("Triangle is right angled\n");
			else printf("Triangle is not right angled \n");
	printf("Goodbye from Problem 4.2... \n");

	return(0);
}
