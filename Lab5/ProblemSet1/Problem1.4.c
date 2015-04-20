/*Laboratory Session 5 - Problem Set No. 1 - Problem 1.4
Write a program which reads three values a, b and c that are the coefficients of a quadratic equation ax^2+bx+c = 0. 
Calculate the roots of the equation after you verify that (b^2-4ac) is positive. 
What is the other condition you have to test for such as you can calculate the roots? 
The roots are given by r = (-b ± sqrt(b^2-4ac))/2a. 
Print either the roots or a message of error if you cannot calculate the roots. Test the program.
Note: you need to add the precompiler directive #include <math.h> at the start of your program to use the function sqrt().*/

#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c;
  
  printf("Welcome to Problem 1.4... \n");
  printf("Enter the first coefficient: \n");
  scanf("%f", &a);
  printf("Enter the second coefficient: \n");
  scanf("%f", &b);
  printf("Enter the third coeffieient: \n");
  scanf("%f", &c);
  
  float pos_test = ((b*b)-(4*a*c));
  
  if ((pos_test >= 0) && (a!=0)){
    float rt_pos = (-b+sqrt(pos_test))/(2*a);
    float rt_neg = (-b-sqrt(pos_test))/(2*a);
    printf("roots = %f %f \n", rt_pos,rt_neg);
  }
  else
  printf("error\n");
  
  printf("Goodbye from Problem 1.4... \n");
  
  return(0);
}
