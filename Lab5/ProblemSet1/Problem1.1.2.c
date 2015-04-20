/*Laboratory Session 5 - Problem Set No. 1 - Problem 1.1
Write a program to calculate the hypotenuse of a right-angled triangle, where the lengths a and b of the triangle are 3 & 4 respectively. 
The program should calculate the length c of the hypotenuse given the formula: c=sqrt(a^2+b^2). 
Print the value of c to the screen. 
Redo the problem by reading values for a and b.
(I have the first part of this problem here: https://github.com/AlbertFaust/em108-software-development/blob/master/Lab5/ProblemSet1/Problem1.1.1.c )*/

#include <stdio.h>
#include <math.h>
int main(void)
{
  float a,b,c;

  printf("Welcome to Problem 1.1.2\n");
  printf("Please enter lenght of side 'a' of triangle:\n");
  scanf("%f", &a);
  printf("Please enter lenght of side 'b' of triangle:\n");
  scanf("%f", &b);

  c=sqrt((a*a)+(b*b));

  printf("When lenghts, a and b, are %.2f and %.2f respectivly:\n",a ,b);
  printf("The lenght of side 'c' (the hypotenuse) is: %.2f\n", c);
  printf("Goodbye from Problem 1.1.2\n");

  return(0);
}
