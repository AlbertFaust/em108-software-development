/*Laboratory Session 5 - Problem Set No. 2 - Problem 2.4
Write a program to calculate the cost of making a copper cylinder. 
The program should read in the radius of the cylinder, r, the height of the cylinder, h and the cost in Euro per square centimetres of copper sheeting, c. 
Assume that there is no wastage in the manufacturing process. 
The program should calculate the area of copper sheeting needed for the two circular ends of the cylinder and add the area needed for the body of the cylinder. 
pi=3.1416. 
The program should print in an easily readable form the cost of the copper cylinder in Euro and punts. */

#include <stdio.h>

int main()
{
  float r, h, c, area, price;
  float pi = 3.1414;
  float punt = 0.787564;
  
  printf("Welcome to Problem 2.4.. \n");
  printf("Enter radius of cylinder in cm: \n");
  scanf("%f",&r);
  printf("Enter height of cylinder in cm: \n");
  scanf("%f",&h);
  printf("Enter cost per square centimeter of copper sheeting in euro: \n");
  scanf("%f",&c);
  
  area = (2*pi*r*h) + (2*pi*r*r);
  price = area*c;
  
  printf("Price of cylinder: %.2f Euro or %.2f Punts\n", price, price*punt);	
  printf("Goodbye from Problem 2.4... \n");
  
  return(0);
}
