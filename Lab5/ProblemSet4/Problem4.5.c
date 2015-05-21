/*Laboratory Session 5 - Problem Set No. 4 - Problem 4.5
Write a program to calculate the commission for a sales department and print the commission in an easily readable form. The program should read in the sales figure as a real number and compute the commission as follows:
- On sales of up to 10000 Euro, a commission of 5% is paid.
- On sales over 10000 Euro and up to 20000 Euro, an additional 5% is paid on the amount exceeding 10000.
- On sales over 20000 an additional 0.25% is paid on the amount exceeding 20000Euro. Provide a menu that would allow you to recompute the commission, to enter a new sales figure, or to quit.*/
#include <stdio.h>

int main()
{
	float sales;
	printf("Welcome to Problem 4.5... \n");
	int menu = 1;
	
	while(menu == 1 || menu == 2){
		if(menu == 1){
			printf("Please enter sales in euro: \n");
			scanf("%f", &sales);
		}
		
		float commission, rate;
		int min = 100000;
		int max = 200000;
	
		if(sales > 0){
			if (sales <= min){
				rate = (sales*0.05);
			}
			else if (sales <= max){
				rate = (min*0.05)+((sales-min)*0.1);
			}
			else{
				rate = (min*0.05) + ((max-min)*0.1) + ((sales-max)*0.1025);
			}
			
			printf("Commission is: %.2f \n\n", rate);	
			printf("Please enter a number to choose an option: \n 1: New Amount \n 2: Recompute Comission \n 3: Quit\n");
			scanf("%d", &menu);
			printf("\n");
			
		}
		else printf("Please enter a number greater than 0\n");
		
	}
	
	printf("Goodbye from Problem 4.5... \n");

	return(0);
}
