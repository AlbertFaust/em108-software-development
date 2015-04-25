/*Laboratory Session 5 - Problem Set No. 3 - Problem 3.1
Write a program that uses a loop to display the numbers from a=1 to b=10, together with the square and cube of each of their values. 
Redo the problem by reading values for a and b.
(I have the second part of this problem here: )*/

#include <stdio.h>
#include <math.h>
int main()
{
  int i;
  printf("Welcome to Problem 3.1... \n");
  printf("Number: Squared: Cubed:\n");
  
  for(i=1; i<=10; i++){
    printf("%d\t",i);
    printf("%d\t",i*i);
    printf("%d\n", i*i*i);
  }
  
  printf("Goodbye from Problem 3.1\n");
  return(0);
}
