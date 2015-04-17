/*Laboratory Session 2 - Exercise 2: College Marks (40%)
An assessor is interested to compare the results of the same group of students at three different modules. 
Write a program that reads the average grade for each of the three modules and displays statistics in the order of their results in the following format.
Provide nice welcome and goodbye messages.
	NAME		AVERAGE
	EM103		65.45
	EM106		56.75
	EM108		47.89*/

#include <stdio.h>

int main()
{
	printf("Hello! Welcome to College Marks... \n");

	int size = 3;
	float scores[size];
	char* modules[] = {"EM103","EM106","EM108"};
	int i;
	
	for(i = 0; i < size; i ++){
		printf("Enter average score of module %s\n", modules[i]);
		scanf("%f",&scores[i]);
	}
	
	printf("NAME\t\tAVERAGE\n");

	if((scores[0] > scores[1]) && (scores[0] > scores[2])){//This is where EM103 is biggest
		printf("%s\t\t%.2f\n", modules[0], scores[0]);
		if(scores[1] > scores[2]){//If EM106 is bigger than EM108
			printf("%s\t\t%.2f\n", modules[1], scores[1]);
			printf("%s\t\t%.2f\n", modules[2], scores[2]);
		}
		else{//EM108 is bigger than EM106
			printf("%s\t%.2f\n", modules[2], scores[2]);
			printf("%s\t%.2f\n", modules[1], scores[1]);
		}
	}
	else if((scores[1] > scores[0]) && (scores[1] > scores[2])){//This is where EM106 is biggest
		printf("%s\t\t%.2f\n", modules[1], scores[1]);
		if(scores[0] > scores[2]){//If EM103 is bigger then EM108
			printf("%s\t\t%.2f\n", modules[0], scores[0]);
			printf("%s\t\t%.2f\n", modules[2], scores[2]);
		}
		else{//EM108 is bigger than EM103
			printf("%s\t\t%.2f\n", modules[2], scores[2]);
			printf("%s\t\t%.2f\n", modules[0], scores[0]);
		}
	}
	else if((scores[2] > scores[0]) && (scores[2] > scores[1])){//This is where EM108 is biggest
		printf("%s\t\t%.2f\n", modules[2], scores[2]);
		if(scores[0] > scores[1]){//If EM103 is bigger than EM106
			printf("%s\t\t%.2f\n", modules[0], scores[0]);
			printf("%s\t\t%.2f\n", modules[1], scores[1]);
		}
		else{//EM106 is bigger than EM103
			printf("%s\t\t%.2f\n", modules[1], scores[1]);
			printf("%s\t\t%.2f\n", modules[0], scores[0]);
		}
	}
	printf("Goodbye! Thank you for using College Marks... \n");

	return(0);
}
