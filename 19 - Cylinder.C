//Machine Problem #1 - Camacho, Daniel Hardy C. BSCS 1-1
//The formula for the computation of the volume of cylinder is V = pir^2h. 
//Write aprogram that will compute and display computed volume of a cylinder taken as inputs the diameter of its circular base and its height.

#include <stdio.h>
#include <math.h>

int main() {
	
	float diameter, height, radius, volume;
	
	printf("INPUT diameter of the cylinder's base =>");
	scanf("%f", &diameter);
	
	printf("INPUT the height of the cylinder =>");
	scanf("%f", &height);
	
	radius = diameter / 2.0;
	
	volume = 3.14 * pow(radius, 2) * height;
	
	printf("The volume of the cylinder is => %0.2f cubic meters", volume);
}
