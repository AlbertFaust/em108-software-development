/*Laboratory Session 5 - Problem Set No. 1 - Problem 1.3
Write a program to calculate how tall is a building. 
To measure how tall is the building you go to the top floor and leave a stone to fall to the ground, while measuring the time it takes to reach the ground level. 
To increase the precision of your experiment you do this three times and take three readings of the time: t1, t2 and t3, expressed in seconds. 
Calculate the height h given the equation h=1/2(g.t^2) where g=9.81 m/s for Dublin and t is the average time. 
The program should print the result expressed in meters. Test the program. */

#include <stdio.h>

int main()
{
  float t1,t2,t3;
  float g = 9.81;
  
  printf("Welcome to Problem 1.3.. \n");
  printf("Enter the lenght of time the stone took to fall on the first drop: \n");
  scanf("%f", &t1);
  printf("Enter the lenght of time the stone took to fall on the second drop: \n");
  scanf("%f", &t2);
  printf("Enter the lenght of time the stone took to fall on the third drop: \n");
  scanf("%f", &t3);
  
  float time = (t1+t1+t3)/3;
  float height = (g*time*time)/2;
  
  printf("The height of the building is: %.2fm \n", height);
  
  return(0);
}
