/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO CHECK WHETHER A STUDENT IS ELIGIBLE FOR THE FINAL EXAM.
*/
#include <stdio.h>
#include <math.h>
int main()
{
	//variable declaration
	float attendance;
	float average_marks;
	
	//prompting the user to key in variables
	printf("Enter your average marks:  ");
	scanf("\n %f", &average_marks);
	
	printf("Enter your attendance:  ");
	scanf("\n %f", &attendance);
	
	
	//decision making
	if(attendance >= 75 && average_marks >= 40){
		printf("Eligible.");}
		else {
			printf("Not Eligible.");
		}
	
	
	return 0;
} 