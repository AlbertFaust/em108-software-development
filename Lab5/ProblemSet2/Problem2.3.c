/*Laboratory Session 5 - Problem Set No. 2 - Problem 2.3
Write a program to calculate the maturity value of a short-term loan at 20, 40 and 60 days. 
The program should read in two values, i.e. the amount of the principal value of the loan in Euro (p) and the percentage annual interest rate (i). 
The maturity value v is given by v=p(1+i/100*n/365) where n is the number of days. 
The program should print the maturity value in Euro and punts for 20, 40and 60 days. */

#include <stdio.h>
#include <math.h>

int main()
{
  float p, i, v;
  int n[3] = {20, 40, 60};
  int j;
  float punt = 0.787564;
  
  printf("Welcome to Problem 2.3... \n");
  printf("Enter the principle value of the loan in euro: \n");
  scanf("%f", &p);
  printf("Enter the annual interest rate: \n");
  scanf("%f", &i);
  
  for(j=0; j<3; j++){
    float v = p*(1+i/100*n[j]/365);
    float k = v*punt;
    printf("Maturity Value after %d days = %.2f Euro or %.2f Punts\n",n[j],v,k);
  }
  printf("Goodbye from Problem 2.3\n");
  
  return(0);
}
