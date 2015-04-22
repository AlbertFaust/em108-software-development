/*Laboratory Session 5 - Problem Set No. 2 - Problem 2.1
Write a program to calculate the cost of fencing a circular field. 
The program should read in two integers, d for the diameter of the field in meters and c for the cost of a twenty-meter roll of sheepwire. 
pi=3.1416. 
The program should print in an easily readable form the number of rolls of sheepwire needed for the job and the cost of fencing the circular field.*/

#include <stdio.h>

int main()
{
  float d, c;
  float pi = 3.1416;
  
  printf("Welcome to Problem 2.1... \n");
  printf("Enter the diameter of the field in meters: \n");
  scanf("%f", &d);
  printf("Enter the cost of a twenty-meter roll of sheepwire: \n");
  scanf("%f", &c);
  
  float fence = pi*d;
  int quantity = (fence+(20-1))/20;
  float cost = c*quantity;
  
  printf("The number of rolls needed is: %d\n",quantity);
  printf("The total cost of %d rolls is %.2feuro\n",quantity, cost);
  printf("Goodbye from Problem 2.1\n");
  
  return(0);
}
