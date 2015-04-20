/*Laboratory Session 5 - Problem Set No. 1 - Problem 1.1
Write a program that calculates the perimeter and the area of a rectangle.
The program should read three pairs of integers (x1,y1), (x2, y2) and (x3,y3) which represent three points of the rectangle.
The program should display the perimeter and the area values in easily readable form. 
Use the Euclidean distance between the points: distance(Point0, Point1)=sqrt[(x0-x1)^2+(y0-y1)^2]. Test the program.
Note: you need to add the precompiler directive #include <math.h> at the start of your program to use the function sqrt().*/

#include <stdio.h>
#include <math.h>

void p(float arr[3][2]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 1; j++){
      printf("x: %f, ", arr[i][j]);
      printf("y: %f ", arr[i][j+1]);
    }
    printf("\n");
  }
}

float distance(float xa, float ya, float xb, float yb){
  return sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
}

void sort(float *sides, float d1, float d2, float d3){
  if(d1 > d2 && d1 > d3){
    sides[0] = d2;
    sides[1] = d3;
  }
  else if(d2 > d1 && d2 > d3){
    sides[0] = d1;
    sides[1] = d3;
  }
  else{
    sides[0] = d1;
    sides[1] = d2;
  }
}

int main()
{
  float xy[3][2];
  
  printf("Welcome to Problem 1.5... \n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 1; j++){
      printf("Please enter x%d\n", i+1);
      scanf("%f", &xy[i][j]);
      printf("Please enter y%d\n", i+1);
      scanf("%f", &xy[i][j+1]);
    }
  }
  
  float di1 = distance(xy[0][0], xy[0][1], xy[1][0], xy[1][1]);
  float di2 = distance(xy[1][0], xy[1][1], xy[2][0], xy[2][1]);	
  float di3 = distance(xy[0][0], xy[0][1], xy[2][0], xy[2][1]);
  
  float sides[2];	
  sort(sides, di1, di2, di3);
  
  float perimiter = (sides[0]*2)+(sides[1]*2);
  float area = (sides[0]*sides[1]);
  
  printf("Perimiter = %.2f, Area = %.2f\n", perimiter, area);
  
  printf("Goodbye from Problem 1.5... \n");
  
  return(0);
}
