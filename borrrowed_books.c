/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A FILE TO STORE BOOKS BORROWED IN A LIBRARY.
*/
#include<stdio.h>
int main()
{
char  borrowed_books[250];
FILE* fptr;

//open file
fptr = fopen("c:\\Desktop\\C\\Assignments\\borrowed_books.bin", "a");	

//error handling
if(fptr == NULL) {
	printf("There was an error opening the file");
	return 1;
}

//prompting the user 
printf("Enter the title of the book borrowed: ");
scanf("%s", &borrowed_books);

//write user input to the file
fprintf(fptr, "The user enetered the title of the book as: %s",borrowed_books);

/**
while((char ch = fgetc(fptr)) !=EOF){
	putchar(ch);
}
*/
//close file
fclose(fptr);
printf("The title has been succesfully stored");	
	
	return 0;
}