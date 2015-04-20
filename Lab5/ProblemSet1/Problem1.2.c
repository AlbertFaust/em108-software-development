/*Laboratory Session 5 - Problem Set No. 1 - Problem 1.2
Write a program which takes the values of three resistors (r1=2000 ohms, r2=1500 ohms and r3=750 ohms) and calculates their total resistance rp when arranged in parallel and rs when arranged in series. 
rp is given by rp=1/(1/r1+1/r2+1/r3) and rs is given by rs=r1+r2+r3. */

#include <stdio.h>

int main(void)
{
  float r1 = 2000;
  float r2 = 1500;
  float r3 = 750;
  float rp, rs;
  
  rp = 1/((1/r1)+(1/r2)+(1/r3));
  rs = r1+r2+r3;
  
  printf("The total resistance when arranged in parallel is %.2f Ohms\n", rp);
  printf("The total resistance when arranged in series is %.2f Ohms\n", rs);
  
  return(0);
}
