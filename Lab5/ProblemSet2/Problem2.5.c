/*Laboratory Session 5 - Problem Set No. 2 - Problem 2.5
Write a program to calculate the cost of a circular steel plate, which has to be cut from a square piece of steel. 
The diameter of the circle is equal to the side of the square. 
The program should read in the radius of the circle, r and the cost per square centimetre of steel plate in Euro, c. 
The square steel plate is purchased at cost c and the wastage can be returned to the supplier for 20% of the cost c for melting down.
pi=3.1415. The program should print in a easily readable form the cost of the circular steel plate. */

#include <stdio.h>

int main()
{
  float r, c, diameter, size, cost, wastage, refund_rate, total_cost, refund;
  float pi = 3.1416;
  
  printf("Welcome to Problem 2.5... \n");
  printf("Enter the radius of the circle in centimeters: \n");
  scanf("%f", &r);
  printf("Enter the cost per square cm of steel plate in Euro: \n");
  scanf("%f", &c);
  
  diameter = r*2;
  size = diameter*diameter;
  cost = size*c;
  wastage = size - (pi*r*r);
  refund_rate = (c/100)*20;
  refund = refund_rate*wastage;
  total_cost = cost-refund;
  
  printf("The total cost is: %.2f Euro \n",total_cost);
  printf("Goodbye from 2.5... \n");
  
  
  return(0);
}
