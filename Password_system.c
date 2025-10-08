/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A DO WHILE LOOP PROGRAM TO PROMPT THE USER TO ENTER PASSWORD WHICH IS 1234.
*/
#include <stdio.h>
int main() {
    int password;
    printf("Enter password:  ");
    scanf("%d", &password);

    do {
        printf("Wrong password....!\n   Try again: ");
        scanf("%d", &password);

    } while (password != 1234);

    printf("Password is correct..\n");

    return 0;
}