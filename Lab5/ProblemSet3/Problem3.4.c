*Laboratory Session 5 - Problem Set No. 3 - Problem 3.4
Write a program to read two numbers n and s. 
The programs should verify that n divides exactly by s. 
Then the program should display all the verses of the following nursery rhyme, starting from number n that decreases with step s:

n green bottles, hanging on a wall,
n green bottles, hanging on a wall,
If s green bottles were to accidentally fall,
There’d be n-s green bottles hanging on the wall. */

#include <stdio.h>
int main()
{
  int n,s;
  
  printf("Welcome to Problem 3.4... \n");
  int validInput = 0;
  while(validInput == 0){
    printf("Please enter first number.\n");
    scanf("%d",&n);
    printf("Please enter number that evenly divides into first number\n");
    scanf("%d",&s);
    
    if(n % s == 0){
      validInput = 1;
      while(n!=0){
        printf("%d green bottles, hanging on a wall,\n",n);
        printf("%d green bottles, hanging on a wall,\n",n);
        printf("If %d green bottles were to accidentally fall,\n",s);
        n = n-s;
        printf("There'd be %d green bottles hanging on the wall.\n\n", n);
      }
    }
    else printf("Invalid input\n");
  }
  printf("Goodbye from Problem 3.4... \n");
  return(0);
}
