/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO CALCULATE THE AMOUNT OF FARE OVER A GIVEN DISTANCE.
*/
#include <stdio.h>

//function prototype
float fare(float distance, float rate);

int main (void){
	float distance;
	float rate = 50;
	float result;
	
printf("Enter distance in KM:  ");
scanf("%f", &distance);	

//function call
result = fare(distance, rate); 
printf("Your fare is Ksh %.2f", result);

return 0;	
	
}
//function declaration
float fare(float distance, float rate){
	float fare;
	fare = rate * distance;
	return fare;
	
}