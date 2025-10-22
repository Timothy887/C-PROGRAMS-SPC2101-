/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO CALCULATE THE ELECTRICAL BILL.
*/
#include <stdio.h>
//function prototype
float electric_bill(float units, float cost);

int main(void){
float units;
float cost;
float result;

    printf("Enter the number of electric units consumed:  ");
	scanf("%f", &units);	
	
	if (units <= 100 ) {
		cost = 10;}
		
		else if (units > 100 && units <=200) {
			cost = 15;}
			
		else if(units > 200){
			cost = 20;}
			
			//function call
			result = electric_bill(units, cost);
			
			printf("Electric_bill is %.2f", result);
	
	
	return 0;
}
//function declaration
float electric_bill(float units, float cost){
	float electric_bill;
	electric_bill = units * cost;
	return electric_bill;
}
