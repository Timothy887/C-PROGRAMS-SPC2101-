 /*
NAME: TIMOTHY MWENDIA NJOKI
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO DETERMINE WHETHER A PERSON IS ELIGIBLE FOR A LOAN.
*/#include <stdio.h>
#include <math.h>
int main(){
	//variable declaration
	int age;
	float salary;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your salary: ");
	scanf("%f", &salary);
    
	
	if (age >= 21 && salary >= 21000){
		
		printf("Congratulations you qualify for a loan");}
		
		else {printf("Unfortunately, we are unable to offer you a loan at this time");
		 }
		 
	 	
return 0;	
}
	
 
	