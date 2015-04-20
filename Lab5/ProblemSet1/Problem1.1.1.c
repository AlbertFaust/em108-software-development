/*Laboratory Session 5 - Problem Set No. 1 - Problem 1.1
Write a program to calculate the hypotenuse of a right-angled triangle, where the lengths a and b of the triangle are 3 & 4 respectively. 
The program should calculate the length c of the hypotenuse given the formula: c=sqrt(a^2+b^2). 
Print the value of c to the screen. 
Redo the problem by reading values for a and b.
(I have the second part of this problem here: )*/

#include <stdio.h>
#include <math.h>
int main(void)
{
    int a = 4, b = 3,c;
    printf("Welcome to Problem 1.1.1\n");
    printf("When lenghts, a and b, are 4 and 3 respectivly:\n");

    c=sqrt((a*a)+(b*b));

    printf("The hypotenuse (c) is %d\n", c);
    printf("Goodbye from Problem 1.1.1\n");

return(0);
}
