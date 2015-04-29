/*Laboratory Session 5 - Problem Set No. 3 - Problem 3.2
Write a program to display a multiplication table, such as young children use. 
The program reads a value n and then displays the results in a table like the one exemplified below for n=4. 
Test the program.
   1  2  3  4
1  1  2  3  4
2  2  4  6  8
3  3  6  9  12
4  4  8  12 16*/

#include <stdio.h>
#include <math.h>

int main()
{
  int i, j, range;
  
  printf("Welcome to Problem 3.2... \n");
  printf("Enter number of multiples: \n");
  scanf("%d",&range);
  
  for(i=1; i<=range; i++){
    printf("  %d",i);
    for(j=1; j<=range; j++)
      printf("  %d",i*j);
    printf("\n");
  }
  
  printf("Goodbye from Problem 3.2\n");
  
  return(0);
}
