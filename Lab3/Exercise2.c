/*Laboratory Session 3 - Exercise 2: Water Basin (40%)
Write a program that reads the dimensions of a water basin: depth, length and width.
The program should compute the amount of paint required to paint this basin on the outside as well as the amount of water it could hold. 
Provide nice welcome and goodbye messages.*/

#include <stdio.h>
#include <string.h>
 
int main()
{
	float depth;
	float lenght;
	float width;
	float volume;
	float surface_area;
	char metric[] = "metric";

	printf("Welcome to WaterBasin... \n");
	printf("Enter units of measurements (mm, cm, m etc.): ");
	scanf("%s",metric);
	printf("Please enter depth of basin: \n");
	scanf("%f", &depth);
	printf("Please enter lenght of basin: \n");
	scanf("%f", &lenght);
	printf("Please enter width of basin: \n");
	scanf("%f", &width);
	volume = depth * lenght * width;
	printf("The Basin holds %.2f%s³ of water \n", volume, metric);
	surface_area = (2 * (depth * width)) + (2 * (depth * lenght)) + (lenght * width);
	printf("%.2f%s² of paint is needed to paint the basin \n", surface_area,metric);
	printf("Thank you for using WaterBasin. Goodbye... \n");

	return(0);
}
