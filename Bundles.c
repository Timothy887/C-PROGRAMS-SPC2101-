/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A PROGRAM TO PROMPT THE USER TO CHOOSE THE BUNDLES OF THEIR CHOICE.
*/
#include <stdio.h>
int main()
{
	int choice;
	printf("    SELECT BUNDLES OF CHOICE.");
	printf("\n 1. 100 MB @ KES. 50\n ");
	printf("2. 500 MB @ KES. 200 \n");
	printf(" 3. 1 GB @ KES. 350 \n");
	printf(" 4. 2 GB @ KES. 600 \n");
	
	printf("Enter bundles of choice (1-4):  ");
	scanf("%d", &choice);
	
	switch(choice)	{
	case 1:
		printf("\n You selected 100MB @ KES; 100."); break;
		
    case 2:
     	printf("You selected 500MB @ KES. 200."); break;
     	
    case 3:
		printf("You have selected 1 GB @ KES. 350."); break;
		
	case 4:
		printf("You selected 2 GB @ KES. 600.");	break;
		
	default:
		printf("Invalid choice.");	
  	
	}
	
	return 0;
}