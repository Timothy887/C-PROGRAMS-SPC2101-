/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO CALCULATE THE COST OF WATER BILL.
*/
#include <stdio.h>
int main()
{
	int water_units;
	float water_bill;
	float cost;
	
	
	printf("Enter the number of water units consumed:  ");
	scanf("%d", &water_units);
	
	if (water_units <= 30 ) {
		cost = 20;}
		
		else if (water_units >= 31 && water_units <= 60) {
			cost = 25;}
			
		else if(water_units > 60){
			cost = 30;}
			
			water_bill = water_units * cost;
			printf("Water bill is %f", water_bill);
			

	
	return 0;
}