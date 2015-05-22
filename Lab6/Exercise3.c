/*Laboratory Session 4 - Exercise 3: Star Patterns (20%)
Write a program that prints the following patterns separately, one below the other. Use “for” loops.
***********
***********
***********
***********
***********

**********
*********
********
*******
******
*****
****
***
**
*

*
**
***
****
*****
******
*******
********
*********
********** */
#include<stdio.h>

int main(){

	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<11;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(i=10;i>0;i--){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<11;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
return(0);
}
