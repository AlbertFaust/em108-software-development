/*Laboratory Session 5 - Problem Set No. 3 - Problem 3.1
Write a program that uses a loop to display the numbers from a=1 to b=10, together with the square and cube of each of their values. 
Redo the problem by reading values for a and b.
(I have the first part of this problem here: https://github.com/AlbertFaust/em108-software-development/blob/master/Lab5/ProblemSet3/Problem1.1.1.c)*/

#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,i;
  printf("Welcome to Problem 3.1... \n");
  printf("Enter smallest number: \n");
  scanf("%d",&a);
  printf("Enter largest number: \n");
  scanf("%d",&b);
  printf("Number: Squared: Cubed:\n");
  
  for(i=a; i<=b; i++){
    printf("%d\t",i);
    printf("%d\t",i*i);
    printf("%d\n", i*i*i);
  }
  
  printf("Goodbye from Problem 3.1\n");
  return(0);
}
