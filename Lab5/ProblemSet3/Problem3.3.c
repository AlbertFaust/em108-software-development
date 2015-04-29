/*Laboratory Session 5 - Problem Set No. 3 - Problem 3.3
Write a program to calculate the Fibonacci series of numbers, given the length of the series. 
The first two numbers in the series are 1 and 1. 
Following these, each number of the series is calculated as the sum of the previous two numbers. 
The program should read n – as the length of the series and to display the first n numbers from the Fibonacci series. 
Test the program.

#include <stdio.h>
int main()
{
  int n;
  int a = 1, b = 1, c;
  
  printf("Welcome to Problem 3.3... \n");
  printf("Please enter length of Fibonacci series:\n");
  scanf("%d",&n);
  
  n = n-2;
  
  printf("Sequence: \n%d\n%d\n",a,b);
  
  while(n!=0){
    c = b + a;
    a = b;
    b = c;
    printf("%d\n", c);
    n--;
  }
  
  printf("Goodbye from Problem 3.3... \n");
  return(0);
}
