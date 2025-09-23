/*
NAME: NJOKI TIMOTHY MWENDIA
REG_NO: PA106/G/29035/25
DESCRIPTION:PROGRAM TO PROMPT THE USER TO ENTER THEIR PERSONAL DETAILS
*/
#include <stdio.h>
int main(){
	//variable declaration
	int age;
	float height;
	float ID_NO;
	float bank_balance;
	
	//user prompt 
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("\nEnter height:");
	scanf("%f", &height);
	
	printf("\nEnter IDNumber:");
	scanf("%f", &ID_NO);
	
	printf("\n Enter your bank_balance: ");
	scanf("%f", &bank_balance);
	
	
	//output
	printf("\nYour age is: %d  Years\n", age);
	printf("Your height is: %.2f  meters\n", height );
	printf("Your ID_NO is: %.0f\n",ID_NO);
	printf("Your bank balance is: Ksh %.1f", bank_balance);
	 
 return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
