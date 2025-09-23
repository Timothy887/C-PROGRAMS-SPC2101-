 /*
NAME: TIMOTHY MWENDIA NJOKI
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO CALCULATE SIMPLE INTEREST
*/
#include <stdio.h>
int main(){
	//variable declaration
	float principle, rate, time, interest;
	
	
	printf("Enter principle amount:");
	scanf("%f", &principle);
	
	printf("\n Enter rate: ");
	scanf("%f", &rate);
	
	printf("\n Enter time: ");
	scanf("%f", &time);
	
	interest = principle * rate/100 * time;
	printf("Simple interest is %.2f", interest);
	
	
	
	
	
	
	
	
return 0;	
}