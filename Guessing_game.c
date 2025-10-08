/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A WHILE LOOP WHICH ALLOWS THE USER TO KEY IN A GUESSED NUMBER UNTIL THEY GET THE CORRECT ONE.
*/
#include <stdio.h>

int main() {
	//variable declaration
    int number = 0;
    int attempts = 0;

    printf("GUESS A NUMBER BETWEEN 1 AND 20\n");

    while (number <=20) {
        printf("Enter your guess number: ");
        scanf("%d", &number);

        attempts++; 

        
        if (number < 1 || number > 20) {
            printf("Invalid choice!!... Enter a number between 1 and 20.\n");
            continue;
        }

        if (number > 10)
            printf("Too high!!.\n");
        else if (number < 10)
            printf("Too low!!.\n");
        else {
            printf("\nCongratulations!!.\n");
            printf("You guessed the correct number in %d attempts.\n", attempts);
            break;
        }
    }
    return 0;
}