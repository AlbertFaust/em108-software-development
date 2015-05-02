/*Laboratory Session 5 - Problem Set No. 4 - Problem 4.1
Write a program that reads in four integers a,b,c and d and then determines which is the biggest. 
Print the value of the biggest with an appropriate message. */

#include <stdio.h>

int main()
{
  float num[4];
  int i,j;
  
  printf("Welcome to Problem 4.1... \n");
  for(i = 0; i < 4; i++){
    printf("Please enter digit number %d: ", i+1);
    scanf("%f",&num[i]);
  }
  if((num[0] > num[1]) && (num[0] > num[2]) && (num[0] > num[3]))
    printf("Largest number is: %.2f\n",num[0]);
  else if ((num[1] > num[0]) && (num[1] > num[2]) && (num[1] > num[3]))
    printf("Largest number is: %.2f\n",num[1]);
  else if ((num[2] > num[1]) && (num[2] > num[0]) && (num[2] > num[3]))
    printf("Largest number is: %.2f\n",num[2]);
  else printf("Largest number is: %.2f\n",num[3]);
  
  printf("Goodbye from Problem 4.1... \n");
  return(0);
}
