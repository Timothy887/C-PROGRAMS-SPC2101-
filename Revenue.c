/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A ONE DIMENSION ARRAY PROGRAM TO CALCULATE REVENUE.
*/
#include <stdio.h>
int main()
{
	
//declare and initialize 1D array
int i;
int revenue [7] = {500, 700, 300, 1000, 900, 850, 950};	
int sum = 0;
int average;
//for (start;stop;step)
for (i=0; i<7; i++)	{
	printf("%d\n",revenue[i]);
	sum = sum + revenue[i];
}
printf("The sum is equal to %d\n", sum);	
	
average = sum/7;	
printf("The average revenue is %d", average);	
	
	
	
	
	return 0;
}