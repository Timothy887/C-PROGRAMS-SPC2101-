/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO CONVERT FAHRENHEIT TO CELCIUS.
*/
#include <stdio.h>
//function prototype
float celcius(float fahrenheit);

int main(void){
	float fahrenheit;
	float result;
	
	printf("Enter the Temperature:  ");
	scanf("%f", &fahrenheit);
	
	//function call
	result = celcius(fahrenheit);
	printf("%.2f", result);
	
	return 0;
}
	
	//function declaration
	float celcius(float fahrenheit){
		float celcius;
		celcius = (fahrenheit - 32) * 5/9;
		return celcius;
		
	}
	
