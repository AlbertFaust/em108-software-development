/*Laboratory Session 5 - Problem Set No. 2 - Problem 2.2
Write a program which reads in the lengths in meters of the sides of a triangle l, m and n, calculate the perimeter and area of the triangle and determines the number of 2 litre tins of paint required to paint the area. 
A 2-litre paint can cover 20 square metres. 
The program should print in an easily readable form the number of tins requires. */

#include <stdio.h>
#include <math.h>

int main()
{
  float l, m, n;
  
  printf("Welcome to Problem 2.2... \n");
  printf("Enter the first lenght of the triangle in meters: \n");
  scanf("%f", &l);
  printf("Enter the second lenght of the triangle in meters: \n");
  scanf("%f", &m);
  printf("Enter the third lenght of the triangle in meters: \n");
  scanf("%f", &n);
  
  float perimeter = l+m+n;
  float o = (perimeter/2);
  float area = sqrt(o*(o-l)*(o-m)*(o-n));     
  int paint = 20;
  int quantity = (area+(paint-1))/paint;
  
  if(l+m>n && m+n>l && n+l>m){
    printf("The perimeter of the triangle is %.2fmeters\n",perimeter);
    printf("The area of the triangle is %.2fmeters²\n",area);
    printf("The amount of 2 litre paint tins needed is: %d\n",quantity);
  }
  else{
    printf("Not a valid triangle\n");
  }
  
  printf("Goodbye from Problem 2.2\n");
  
  return(0);
}
