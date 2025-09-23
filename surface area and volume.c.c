 /*
NAME: TIMOTHY MWENDIA NJOKI
REG_NUMBER: PA106/G/29035/25
GROUP: Group B.
DESCRIPTION: A PROGRAM TO CALCULATE THE SURFACE ARA AND VOLUME OF A CYLINDER.
*/
#include <stdio.h>
#include<math.h>

int main(){
	
	//declaration of variables
	
	float radius, height, surface_area, volume;
    const float PI = 3.142;
	
	//prompting the user to key in the radius
	printf("Enter radius:");
	scanf("\n%f", &radius);
	
	//prompting the user to enter the height
	printf("Enter height:");
	scanf("\n%f", &height);
	
	
	//computing the volume	
	volume = PI * pow(radius, 2) * height;
	printf("Volume is: %.4f\n", volume);
	
	//computing the surface area
	surface_area = (2 * PI * pow(radius,2) * height) + (2 * PI * radius * height);
	printf("SA is: %.4f", surface_area);
		
	return 0;
}