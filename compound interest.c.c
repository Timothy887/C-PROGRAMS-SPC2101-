/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO CALCULATE COMPOUND INTEREST
*/
#include <stdio.h>
#include <math.h>
int main(){
	//variable declaration
	int time;
	float principle;
	float rate;
	float compound_interest;
	float total_amount;
	float number_of_compounding_years;
	
	//prompting the user to key in time
	printf("Enter time: ");
	scanf("\n%d", &time);
	
	//prompting the user to enter the principle
	printf("Enter principle: ");
	scanf("\n%f", &principle);
	
	//prompting the user to enter the rate 
	printf("Enter rate: ");
	scanf("\n%f", &rate);
	
	//prompting the user to enter the number of compounding years
	printf("Enter number of compounding years: ");
	scanf("\n%f", &number_of_compounding_years);
	
	//computation of the compound interest
	compound_interest = principle * pow(1 + (rate/100)/number_of_compounding_years,number_of_compounding_years * time);
	printf("The compound interest is: Ksh.%.2f\n", compound_interest);
	
	//computation of the total amount
	total_amount = principle + compound_interest;
	printf("Total amount is: Ksh.%.2f",total_amount);
		
	
	return 0;
	}